#include <stdio.h>

/* copy input to output */
int main() {
    printf("hint: ctrl-d to enter EOF\n");
    int c = getchar() == EOF;
    printf("(getchar() == EOF) -> %d\n", c);
}
