#include <stdio.h>

int main() {
    char student_names[3][50];
    int marks[3][3], i, j;
    float avg;

    for (i = 0; i < 3; i++) {
        printf("Enter full name of student %d: ", i + 1);
        scanf(" %[^\n]", student_names[i]);   // space clears old Enter

        for (j = 0; j < 3; j++) {
            printf("Enter mark %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n%-25s %s\n", "Name", "Average");
    for (i = 0; i < 3; i++) {
        int sum = 0;
        for (j = 0; j < 3; j++)
            sum += marks[i][j];
        avg = sum / 3.0;
        printf("%-25s %.2f\n", student_names[i], avg);
    }
    return 0;
}