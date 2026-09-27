#include <stdio.h>

int main() {
    int age, creditScore;
    float income;
    char existingLoan;

    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Monthly Income: ");
    scanf("%f", &income);
    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);
    printf("Existing Loan? (Y/N): ");
    scanf(" %c", &existingLoan);

    if (age >= 21 && income >= 100000 && creditScore >= 750 && (existingLoan=='N' || existingLoan=='n')) {
        printf("High Approval Chance\n");
    } else if (age >= 21 && income >= 75000 && creditScore >= 650 && (existingLoan=='Y' || existingLoan=='y')) {
        printf("Manual Review\n");
    } else if (age >= 21 && income >= 50000 && creditScore >= 600) {
        printf("Possibly Eligible\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}