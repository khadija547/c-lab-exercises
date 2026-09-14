#include <stdio.h>

int main() {
    int total, missing, duplicates;
    printf("Enter total number of records: ");
    scanf("%d", &total);
    printf("Enter number of missing records: ");
    scanf("%d", &missing);
    printf("Enter number of duplicate records: ");
    scanf("%d", &duplicates);

    if (total <= 0) {
        printf("Invalid Dataset\n");
        return 0;
    }

    float missingPercent = (float)missing / total * 100;
    float duplicatePercent = (float)duplicates / total * 100;

    if (missingPercent > 30)
        printf("Poor Quality Dataset\n");
    else if (missingPercent <= 30 && duplicatePercent > 20)
        printf("Dataset Requires Cleaning\n");
    else
        printf("Dataset Ready for Training\n");

    return 0;
}