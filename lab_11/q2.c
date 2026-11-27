#include <stdio.h>

struct Product
{
    int id;
    char name[30];
    char category[20];
    float price;
    int stock;
};

void displayProductDetails(struct Product p)
{
    float finalPrice = p.price - (p.price * 5 / 100);

    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Stock: %d\n", p.stock);
    printf("Price after 5%% discount: %.2f\n\n", finalPrice);
}

int main()
{
    struct Product p1 = {101, "Laptop", "Electronics", 80000, 10};
    struct Product p2 = {102, "Shoes", "Fashion", 3500, 25};

    displayProductDetails(p1);
    displayProductDetails(p2);

    return 0;
}