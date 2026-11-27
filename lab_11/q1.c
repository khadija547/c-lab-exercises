#include <stdio.h>

int calculateChecksum(int transactionID)
{
    if (transactionID < 10)          // base case: single digit
        return transactionID;

    int sum = 0;
    while (transactionID > 0)        // add all digits
    {
        sum = sum + transactionID % 10;
        transactionID = transactionID / 10;
    }
    return calculateChecksum(sum);   // repeat with the sum
}

int main()
{
    int id;
    printf("Enter transaction ID: ");
    scanf("%d", &id);
    printf("Checksum = %d\n", calculateChecksum(id));
    return 0;
}