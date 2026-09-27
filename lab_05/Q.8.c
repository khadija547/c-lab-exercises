#include <stdio.h>

int main() {
    int permission;
    printf("Enter permission value (View=1,Train=2,Test=4,Deploy=8): ");
    scanf("%d", &permission);

    if (permission & 1) printf("View Allowed\n");
    if (permission & 2) printf("Train Allowed\n");
    if (permission & 4) printf("Test Allowed\n");
    if (permission & 8) printf("Deploy Allowed\n");

    if ((permission & 2) && (permission & 8)) printf("Has both Training and Deployment permissions\n");
    else printf("Does NOT have both Training + Deployment\n");
    return 0;
}