#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int i;
    char c;

    for (i = 1; i < argc; i++) {
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

    return 0;
}