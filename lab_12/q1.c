#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, total = 0, lowestIndex = 0;
    int *stock;

    printf("Enter number of book categories: ");
    scanf("%d", &n);

    stock = (int *)malloc(n * sizeof(int));   // allocate
    if (stock == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // 2. Accept stock for each category
    for (i = 0; i < n; i++)
    {
        printf("Enter stock for category %d: ", i + 1);
        scanf("%d", &stock[i]);
    }

    // 3. Total and lowest
    for (i = 0; i < n; i++)
    {
        total = total + stock[i];
        if (stock[i] < stock[lowestIndex])
            lowestIndex = i;
    }

    printf("\nTotal stock = %d\n", total);
    printf("Average stock per category = %.2f\n", (float)total / n);
    printf("Lowest stock is in category index %d (category %d) with %d books\n",
           lowestIndex, lowestIndex + 1, stock[lowestIndex]);

    // 4. Update stock of any category
    int cat, newQty;
    printf("\nEnter category number to update (1 to %d): ", n);
    scanf("%d", &cat);

    if (cat >= 1 && cat <= n)
    {
        printf("Enter new stock: ");
        scanf("%d", &newQty);
        stock[cat - 1] = newQty;              // -1 because index starts at 0

        printf("\nUpdated stock:\n");
        for (i = 0; i < n; i++)
            printf("Category %d: %d\n", i + 1, stock[i]);
    }
    else
        printf("Invalid category.\n");

    // 5. Free memory
    free(stock);
    stock = NULL;

    return 0;
}