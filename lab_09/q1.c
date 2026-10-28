#include <stdio.h>

// Helper 1: returns the discount amount in PKR
float calculateDiscount(float amount, char type) {
    float rate = 0;

    if (type == 'P' || type == 'p')
        rate = 20;
    else if (type == 'G' || type == 'g')
        rate = 10;
    else if (type == 'S' || type == 's')
        rate = 5;

    if (amount > 10000)
        rate = rate + 2;               // extra 2% for big shopping

    return amount * rate / 100;
}

// Helper 2: adds tax and shipping, returns total payable
float calculateFinalBill(float discounted) {
    float tax, shipping = 0, total;

    tax = discounted * 15 / 100;       // 15% sales tax

    if (discounted <= 5000)
        shipping = 300;                // flat shipping

    total = discounted + tax + shipping;
    return total;
}

int main() {
    float amount, discount, discounted, finalBill;
    char type;

    printf("Enter shopping amount (PKR): ");
    scanf("%f", &amount);

    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &type);               // space skips old Enter

    discount = calculateDiscount(amount, type);
    discounted = amount - discount;
    finalBill = calculateFinalBill(discounted);

    printf("\nOriginal amount : %.2f\n", amount);
    printf("Discount        : %.2f\n", discount);
    printf("Discounted      : %.2f\n", discounted);
    printf("Final payable   : %.2f\n", finalBill);
    return 0;
}