#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc <= 1) {
        printf("Must include arguments.");
        return -1;
    }

    char format;
    if (!strcmp(*(argv + 1), "-m")) {
        format = 'm';
    } else {
        printf("Please selecte a valid format.");
        return -1;
    }

    if (format == 'm') {
        for (int i = 2; i < argc; i++) {
            char* str = *(argv + i);
            if (!strcmp(str, "yes")) {
                fputs("ay ", stdout);
            } else if (!strcmp(str, "no")) {
                fputs("nay ", stdout);
            } else if (!strcmp(str, "do")) {
                fputs("doth ", stdout);
            } else if (!strcmp(str, "you")) {
                fputs("thou ", stdout);
            } else if (!strcmp(str, "your")) {
                fputs("thy ", stdout);
            } else if (!strcmp(str, "are")) {
                fputs("art ", stdout);
            } else if (!strcmp(str, "often")) {
                fputs("oft ", stdout);
            } else {
                printf("%s ", str);
            }
        }
    }

    return 0;
}