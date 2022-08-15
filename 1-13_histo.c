#include <stdio.h>

#define IN  1    /* inside a word */
#define OUT 0    /* outside a word */

#define BINS 20

int main() {
    int c, state, count;
    state = OUT;
    count = 0;
    int histo[BINS];

    for (int i = 0; i < BINS; ++i) {
        histo[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                state = OUT;
                if (count < BINS)
                    ++histo[count - 1];
                count = 0;
            }
        } else {
            state = IN;
            ++count;
        }
    }

    if (count) {
        ++histo[count - 1];
    }

    for (int i = 0; i < BINS; ++i) {
        printf("%2d ", i + 1);
        for (int j = 0; j < histo[i]; ++j) {
            putchar('=');
        }
        putchar('\n');
    }
}
