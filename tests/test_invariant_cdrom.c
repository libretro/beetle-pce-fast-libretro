#include <check.h>
#include <stdlib.h>
#include <string.h>

/*
 * The vulnerability is that cdrom_send_command (or its internal helper) copies
 * cmd_len bytes into a fixed-size CDB buffer (typically 16 bytes) without
 * bounds checking. We test the invariant that cmd_len must never exceed 16.
 *
 * Since the internal function that performs the memcpy is static/platform-specific
 * and not directly callable in a portable test, we validate the invariant at the
 * public API boundary: cdrom_send_command should reject or clamp cmd_len > 16.
 *
 * We call cdrom_send_command with a NULL/invalid fd and oversized cmd buffers.
 * The function MUST return an error (non-zero) without crashing when cmd_len > 16.
 */

#include "libretro-common/cdrom/cdrom.c"

/* Maximum SCSI CDB size */
#define SCSI_CDB_MAX_SIZE 16

START_TEST(test_cdrom_cmd_len_bounds)
{
    /* Invariant: cmd_len values exceeding SCSI CDB max (16) must not cause
     * buffer overflow; the function must either reject or safely handle them. */
    unsigned char buf[64];
    unsigned char cmd[64];
    memset(cmd, 0x41, sizeof(cmd));
    memset(buf, 0, sizeof(buf));

    /* Test cases: oversized cmd_len values and a valid one */
    size_t test_lens[] = {
        32,   /* exploit case: double the CDB buffer size */
        17,   /* boundary: one byte over max */
        12,   /* valid: standard SCSI CDB length */
    };
    int num_cases = sizeof(test_lens) / sizeof(test_lens[0]);

    for (int i = 0; i < num_cases; i++)
    {
        size_t cmd_len = test_lens[i];

        /* Use an invalid file descriptor (NULL/INVALID) so the command won't
         * actually be sent to hardware, but the bounds check must still apply. */
#ifdef _WIN32
        void *fds = NULL;
#else
        /* On POSIX, use fd = -1 wrapped in the libretro_vfs_implementation_file */
        void *fds = NULL;
#endif
        /* If cmd_len > 16, the function must not overflow the CDB buffer.
         * It should return an error code (non-zero) or at minimum not crash. */
        int ret = cdrom_send_command(fds, DIRECTION_NONE, buf, sizeof(buf),
                                     cmd, cmd_len, 0);

        if (cmd_len > SCSI_CDB_MAX_SIZE)
        {
            /* Must return error for oversized command */
            ck_assert_int_ne(ret, 0);
        }
        /* For valid cmd_len with NULL fd, error is also acceptable (no device) */
    }
}
END_TEST

Suite *security_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Security");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_cdrom_cmd_len_bounds);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = security_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}