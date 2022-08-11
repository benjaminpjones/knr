#include <stdio.h>

#define   LOWER  0    /* lower limit of the table */
#define   UPPER  300  /* upper limit */
#define   STEP   20   /* step size */

int main() {
    printf(" °F        °C\n");
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        float celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3d\t%6.1f\n", fahr, celsius);
    }

    return 0;
}
