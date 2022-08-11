#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step = 10;

    celsius = lower;
    printf(" °C        °F\n");
    while (celsius <= upper) {
        fahr = (9.0 * celsius / 5.0) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
