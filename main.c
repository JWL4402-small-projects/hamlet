#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int i;
    char c;

    for (i = 1; i < argc; i++) {
        char* str = *(argv + i);
        if (!strcmp(str, "your")) {
            fputs("thy ", stdout);
        } else {
            printf("%s ", str);
        }
    }

    return 0;
}