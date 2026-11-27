#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, total = 0, highestIndex = 0;
    int *ratings;

    // 1. Ask for number of categories and allocate
    printf("Enter number of movie categories: ");
    scanf("%d", &n);

    ratings = (int *)malloc(n * sizeof(int));
    if (ratings == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // 2. Input rating count for each category
    for (i = 0; i < n; i++)
    {
        printf("Enter rating count for category %d: ", i + 1);
        scanf("%d", &ratings[i]);
    }

    // 3. Total and highest
    for (i = 0; i < n; i++)
    {
        total = total + ratings[i];
        if (ratings[i] > ratings[highestIndex])
            highestIndex = i;
    }

    printf("\nTotal ratings = %d\n", total);
    printf("Average ratings per category = %.2f\n", (float)total / n);
    printf("Highest rating count: category %d (%d ratings)\n",
           highestIndex + 1, ratings[highestIndex]);

    // 4. Update the rating count of a selected category
    int cat, newCount;
    printf("\nEnter category number to update (1 to %d): ", n);
    scanf("%d", &cat);

    if (cat >= 1 && cat <= n)
    {
        printf("Enter new rating count: ");
        scanf("%d", &newCount);
        ratings[cat - 1] = newCount;

        // 5. Display updated values
        printf("\nUpdated ratings:\n");
        for (i = 0; i < n; i++)
            printf("Category %d: %d\n", i + 1, ratings[i]);
    }
    else
        printf("Invalid category.\n");

    // Free memory before the program ends
    free(ratings);
    ratings = NULL;

    return 0;
}