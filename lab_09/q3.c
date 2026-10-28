#include <stdio.h>

int main() {
    int image[3][3];
    int (*ptr)[3] = image;       // pointer to a row of 3 integers
    int i, j;

    // Input
    printf("Enter 9 pixel values:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Pixel (%d,%d): ", i, j);
            scanf("%d", *(ptr + i) + j);       // address of pixel, so no &
        }
    }

    // Brighten: multiply by 2
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            *(*(ptr + i) + j) = *(*(ptr + i) + j) * 2;
        }
    }

    // Display
    printf("\nBrightened image:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", *(*(ptr + i) + j));
        }
        printf("\n");
    }
    return 0;
}