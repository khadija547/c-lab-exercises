#include <stdio.h>

struct Item
{
    int id;
    char name[30];
    int quantity;
    float unitPrice;
};

int main()
{
    struct Item items[5];
    int i;
    float totalValue = 0;

    // 1. Accept details for 5 items
    for (i = 0; i < 5; i++)
    {
        printf("\nItem %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &items[i].id);
        printf("Enter Name: ");
        scanf("%s", items[i].name);
        printf("Enter Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter Unit Price: ");
        scanf("%f", &items[i].unitPrice);
    }

    // 2. Total inventory value
    for (i = 0; i < 5; i++)
    {
        totalValue = totalValue + items[i].quantity * items[i].unitPrice;
    }
    printf("\nTotal inventory value = %.2f\n", totalValue);

    // 3. Search by ID
    int searchId, found = 0;
    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchId);

    for (i = 0; i < 5; i++)
    {
        if (items[i].id == searchId)
        {
            printf("\nRecord found:\n");
            printf("ID: %d\n", items[i].id);
            printf("Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Unit Price: %.2f\n", items[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Item not found.\n");

    return 0;
}