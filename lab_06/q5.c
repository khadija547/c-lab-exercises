#include <stdio.h>

int main() {
    int n, i;
    int fact2n = 1, factN1 = 1, factN = 1, catalan;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n; i++)
        fact2n = fact2n * i;

    for (i = 1; i <= n + 1; i++)
        factN1 = factN1 * i;

    for (i = 1; i <= n; i++)
        factN = factN * i;

    catalan = fact2n / (factN1 * factN);

    printf("Catalan number = %d\n", catalan);
    return 0;
}