#include <stdio.h>

int main() {
    int num, digit, even = 0, odd = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 0)
        even = 1;               // 0 is one even digit

    while (num > 0) {
        digit = num % 10;       // take last digit
        if (digit % 2 == 0)
            even++;
        else
            odd++;
        num = num / 10;         // remove last digit
    }

    printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);
    return 0;
}