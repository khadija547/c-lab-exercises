#include <stdio.h>

int main() {
    int pin, sum = 0;
    printf("Enter 4-digit PIN: ");
    scanf("%d", &pin);

    while (pin > 0) {
        sum = sum + pin % 10;   // take last digit, add to sum
        pin = pin / 10;         // remove last digit
    }

    printf("Sum = %d\n", sum);
    if (sum > 10)
        printf("Strong PIN\n");
    else
        printf("Weak PIN\n");
    return 0;
}