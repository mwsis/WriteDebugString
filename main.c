
#include <stlsoft/stlsoft.h>

#if _STLSOFT_VER < 0x010b0184
# error requires STLSoft v1.11.1-b4 or later
#endif

#include <platformstl/filesystem/path_functions.h>
#include <winstl/diagnostics/output_debug_line.h>

#include <windows.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define WRITEDEBUGSTRING_VER_MAJOR  0
#define WRITEDEBUGSTRING_VER_MINOR  0
#define WRITEDEBUGSTRING_VER_PATCH  1


int main(int argc, char* argv[])
{
    stlsoft_C_string_slice_m_t const program_name = platformstl_C_get_executable_name_from_path(argv[0]);

    if (1 == argc)
    {
missing_arguments:

        fprintf(
            stderr
        ,   "%.*s: missing arguments; use --help for usage\n"
        ,   (int)program_name.len, program_name.ptr
        );

        return EXIT_FAILURE;
    }

    if (0 == strcmp("--help", argv[1]))
    {
        fprintf(
            stdout
        ,   "USAGE: %.*s { --help | --version | [ --sleep-after-writes ] <msg-1> [ ... <msg-N> ] }\n"
        ,   (int)program_name.len, program_name.ptr
        );

        return EXIT_SUCCESS;
    }
    else
    if (0 == strcmp("--version", argv[1]))
    {
        fprintf(
            stdout
        ,   "%.*s %d.%d.%d\n"
        ,   (int)program_name.len, program_name.ptr
        ,   WRITEDEBUGSTRING_VER_MAJOR
        ,   WRITEDEBUGSTRING_VER_MINOR
        ,   WRITEDEBUGSTRING_VER_PATCH
        );

        return EXIT_SUCCESS;
    }
    else
    {
        int n = 0;
        int do_sleep = 0;

        for (int i = 1; argc != i; ++i)
        {
            char const* const arg = argv[i];

            if (0 == strcmp("--sleep-after-writes", arg))
            {
                do_sleep = 1;
            }
            else
            {
                winstl_C_diagnostics_output_debug_line_1_m(arg);

                ++n;
            }
        }

        if (0 == n)
        {
            goto missing_arguments;
        }

        printf("wrote %d message(s) to debug stream\n", n);

        if (do_sleep)
        {
            Sleep(5000);
        }

        return EXIT_SUCCESS;
    }
}
