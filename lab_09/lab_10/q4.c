#include <stdio.h>

int main() {
    char name[50];
    int account;
    float amount;

    printf("Enter customer name: ");
    scanf(" %49[^\n]", name);       /* reads name with spaces */
    printf("Enter account number: ");
    scanf("%d", &account);
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    FILE *fptr = fopen("bank_log.txt", "a");   /* "a" = append (add at the end) */

    if (fptr == NULL) {                        /* file could not be opened */
        printf("Error: Could not open file!\n");
        return 1;
    }

    fprintf(fptr, "Name: %s | Account: %d | Amount: %.2f\n", name, account, amount);
    fclose(fptr);                              /* closing saves the data safely */

    printf("Transaction saved successfully.\n");
    return 0;
}