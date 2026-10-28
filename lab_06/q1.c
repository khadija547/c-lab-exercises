#include <stdio.h>

int main() {
    int num, rev = 0;
    printf("Enter ticket number: ");
    scanf("%d", &num);

    while (num > 0) {
        rev = rev * 10 + num % 10;  // push last digit into rev
        num = num / 10;             // remove last digit
    }

    printf("Reversed number = %d\n", rev);
    return 0;
}