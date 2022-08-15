#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            /* Terminal doesn't transmit \b to my program on my system, YMMV. */
            printf("\\b");
        } else if (c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }
}
