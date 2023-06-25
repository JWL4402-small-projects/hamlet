#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int i;
    char c;

    for (i = 0; i < argc; i++) {
        printf("%d\n", strlen(*(argv + i)));
    }

    return 0;
}