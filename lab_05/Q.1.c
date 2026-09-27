#include <stdio.h>

int main() {
    int prog, math, ai;
    float attendance, avg;

    printf("Enter Programming marks: ");
    scanf("%d", &prog);
    printf("Enter Mathematics marks: ");
    scanf("%d", &math);
    printf("Enter AI marks: ");
    scanf("%d", &ai);
    printf("Enter attendance %%: ");
    scanf("%f", &attendance);

    if (prog >= 50 && math >= 50 && ai >= 50 && attendance >= 75) {
        avg = (prog + math + ai) / 3.0;
        printf("Eligible. Average: %.2f\n", avg);
        
        if (avg >= 80) printf("Excellent\n");
        else if (avg >= 70) printf("Very Good\n");
        else if (avg >= 60) printf("Good\n");
        else if (avg >= 50) printf("Satisfactory\n");
        else printf("Poor\n");
    } else {
        printf("Student is Not Eligible\n");
    }
    return 0;
}