#include <stdio.h>

// Helper 1: take money out
void withdraw(float *balance, float amount) {
    if (amount <= *balance) {
        *balance = *balance - amount;
        printf("Withdrawal successful. Amount withdrawn: %.2f\n", amount);
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

// Helper 2: put money in
void deposit(float *balance, float amount) {
    *balance = *balance + amount;
    printf("Deposit successful. Updated balance: %.2f\n", *balance);
}

int main() {
    float balance = 5000;      // starting balance
    float amount;
    int choice;

    printf("Current balance: %.2f\n", balance);
    printf("Select transaction (1 = Debit/Withdraw, 2 = Credit/Deposit): ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1)
        withdraw(&balance, amount);
    else if (choice == 2)
        deposit(&balance, amount);
    else
        printf("Invalid transaction type\n");

    printf("Final account balance: %.2f\n", balance);
    return 0;
}