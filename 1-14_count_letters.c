#include <stdio.h>

/* idk if this is valid haha */
#define VALID_CHARS 128
#define NUM_BINS 20

int main() {
    int c;
    int freqs[VALID_CHARS]; /* counts of each character */

    for (int i = 0; i < VALID_CHARS; ++i) {
        freqs[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++freqs[c];
    }

    int max = 0;
    for (int i = 0; i < VALID_CHARS; ++i) {
        max = freqs[i] > max ? freqs[i] : max;
    }
    int bin_size = max / NUM_BINS + 1;
    int freq_hist[NUM_BINS];
    for (int i = 0; i < NUM_BINS; ++i) {
        freq_hist[i] = 0;
    }

    for (int i = 0; i < VALID_CHARS; ++i) {
        ++freq_hist[freqs[i] / bin_size];
    }

    for (int i = 0; i < NUM_BINS; ++i) {
        printf("%4d ", (i + 1) * bin_size - 1);
        for (int j = 0; j < freq_hist[i]; ++j) {
            putchar('=');
        }
        putchar('\n');
    }
}
