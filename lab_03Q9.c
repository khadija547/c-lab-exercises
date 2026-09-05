#include <stdio.h>

int main(){
    char product_name[50];
    int quantity;
    float price;

    printf("Enter product name:");
    scanf(" %[^\n]",product_name);

    printf("Enter quantity:");
    scanf(" %d", &quantity);

    printf("Enter price:");
    scanf(" %f", &price);

    printf("Product Name: %s\n", product_name);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);

    return 0;
}