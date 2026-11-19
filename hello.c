#include <stdio.h>

int main(int argc, char *argv[]) {
    puts("Hello System Programming Students");
    puts("Explain git snapshots in program output");
    puts("This change was done using VS Code");

    for (int ii = 0; ii < argc; ii++) {
        printf("argv[%d] = %s\n", ii, argv[ii]);
    }

    return 0;
}
