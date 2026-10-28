#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    // top half (including middle row)
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");                  // left spaces
        printf("*");                      // left edge
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");              // inside spaces
            printf("*");                  // right edge
        }
        printf("\n");
    }

    // bottom half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}