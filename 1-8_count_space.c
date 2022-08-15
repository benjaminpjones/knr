#include <stdio.h>

int main() {
    int c;
    int space_count = 0;
    int return_count = 0;
    int tab_count = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            tab_count++;
        if (c == '\n')
            return_count++;
        if (c == ' ')
            space_count++;
    }

    printf("# spaces: %d\n", space_count);
    printf("# tabs: %d\n", tab_count);
    printf("# new lines: %d\n", return_count);
    printf("total: %d\n", space_count + tab_count + return_count);
}
