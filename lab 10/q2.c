#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50];     /* 10 names, each up to 49 letters */
    char temp[50];
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%49s", names[i]);
    }

    /* Bubble sort: compare neighbours, swap if in wrong order */
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            /* strcmp > 0 means names[j] comes AFTER names[j+1] in the dictionary */
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);          /* swap using 3 copies */
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nSorted names (A to Z):\n");
    for (i = 0; i < 10; i++)
        printf("%d. %s\n", i + 1, names[i]);
    return 0;
}