#include <stdio.h>

int main() {
    int shifts[4][3];
    int i, j, target;

    // 2. Input the 3x3 data
    printf("Enter initial 3x3 production data:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Workstation %d, Shift %d: ", i, j + 1);
            scanf("%d", &shifts[i][j]);
        }
    }

    // 3. Ask for the row index
    printf("Enter row index to insert at (0 to 3): ");
    scanf("%d", &target);

    // 4. Shift rows down (start from the bottom!)
    for (i = 3; i > target; i--) {
        for (j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    // 5. Insert the new row
    printf("Enter 3 new production values:\n");
    for (j = 0; j < 3; j++) {
        printf("New value %d: ", j + 1);
        scanf("%d", &shifts[target][j]);
    }

    // Print the 4x3 matrix
    printf("\nFinal matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", shifts[i][j]);
        }
        printf("\n");
    }
    return 0;
}