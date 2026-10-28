#include <stdio.h>

// 3 helpers
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

// Manager: receives 2 numbers and a name tag (function pointer)
int compute(int x, int y, int (*operation)(int, int)) {
    return operation(x, y);       // call the helper whose tag we got
}

int main() {
    int a, b;
    int sum, product, maximum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = compute(a, b, add);
    product = compute(a, b, multiply);
    maximum = compute(a, b, findMax);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Maximum = %d\n", maximum);
    return 0;
}