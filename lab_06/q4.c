#include <stdio.h>

int main() {
    int num, original, rev = 0;
    printf("Enter book code: ");
    scanf("%d", &num);

    original = num;             // save the original

    while (num > 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    if (rev == original)
        printf("Valid code (Palindrome)\n");
    else
        printf("Invalid code (Not a palindrome)\n");
    return 0;
}