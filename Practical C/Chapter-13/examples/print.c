/********************************************************
 * Program: print
 *
 * Purpose:
 *   Formats files for printing.
 *
 * Usage:
 *   print [options] file(s)
 *
 * Options:
 *   -v           Produces verbose messages
 *   -o<file>    Sends output to a file (default: print.out)
 *   -l<lines>   Sets the number of lines per page (default: 66)
 *
 ********************************************************/

#include <stdio.h>
#include <stdlib.h>

/* verbose mode (default = false) */
int verbose = 0;

/* output filename */
char *out_file = "print.out";

/* name of the program (for error messages) */
char *program_name;

/* number of lines per page */
int line_max = 66;

/********************************************************
 * do_file -- Dummy routine to handle a file.
 *
 * Parameters:
 *   name -- Name of the file to print.
 ********************************************************/
void do_file(char *name)
{
    printf("Verbose %d Lines %d Input %s Output %s\n",
           verbose, line_max, name, out_file);
}

/********************************************************
 * usage -- Tells the user how to use this program and exits.
 ********************************************************/
void usage(void)
{
    fprintf(stderr, "Usage: %s [options] [file-list]\n", program_name);
    fprintf(stderr, "Options:\n");
    fprintf(stderr, "  -v           verbose\n");
    fprintf(stderr, "  -l<number>   number of lines per page\n");
    fprintf(stderr, "  -o<name>     set output filename\n");
    exit(8);
}

int main(int argc, char *argv[])
{
    /* save the program name for future use */
    program_name = argv[0];

    /*
     * Loop through command-line options.
     * Stop if we run out of arguments or
     * encounter an argument without a dash.
     */
    while ((argc > 1) && (argv[1][0] == '-')) {

        /* argv[1][1] is the option character */
        switch (argv[1][1]) {

        case 'v':       /* -v verbose */
            verbose = 1;
            break;

        case 'o':       /* -o<name> output file */
            out_file = &argv[1][2];
            break;

        case 'l':       /* -l<number> max lines per page */
            line_max = atoi(&argv[1][2]);
            printf("Option l is selected.");
            break;

        default:
            fprintf(stderr, "Bad option %s\n", argv[1]);
            usage();
        }

        /* move to the next argument */
        ++argv;
        --argc;
    }

    /*
     * If no files are specified, process standard input.
     */
    if (argc == 1) {
        do_file("print.in");
    } else {
        while (argc > 1) {
            do_file(argv[1]);
            ++argv;
            --argc;
        }
    }

    return 0;
}

