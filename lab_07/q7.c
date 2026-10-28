#include <stdio.h>

int main() {
    float sensor_data[3][4];
    int r, c, target;

    // 2. Input data
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 4; c++) {
            printf("Day %d, Sensor %d: ", r + 1, c);
            scanf("%f", &sensor_data[r][c]);
        }
    }

    // 3. Ask which column to delete
    printf("Enter faulty sensor column (0 to 3): ");
    scanf("%d", &target);

    // 4. Left shift
    for (r = 0; r < 3; r++) {
        for (c = target; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    // 5. Print 3x3 matrix
    printf("\nUpdated matrix:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%8.2f", sensor_data[r][c]);
        }
        printf("\n");
    }
    return 0;
}