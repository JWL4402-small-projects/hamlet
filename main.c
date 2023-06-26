#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc <= 1) {
        printf("Must include arguments. Type 'hamlet --help' for instructions.");
        return -1;
    }

    if (!strcmp(*(argv + 1), "--help")) {
        puts("usage: hamlet \t[<args>]");
        puts("\nWill translate the arguments into Shakespearean English.");
        puts("ex.\thamlet how are you");
        puts("\t> how art thou");
        return 0;
    }

    for (int i = 1; i < argc; i++) {
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