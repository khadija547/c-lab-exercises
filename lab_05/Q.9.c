#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1.Sqrt 2.Power 3.Absolute 4.Floor 5.Ceiling\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: { double n; printf("Enter n >=0: "); scanf("%lf",&n); if(n<0) printf("Invalid for sqrt\n"); else printf("Sqrt = %lf\n", sqrt(n)); break; }
        case 2: { double b,e; printf("Enter base and exponent: "); scanf("%lf %lf",&b,&e); printf("Power = %lf\n", pow(b,e)); break; }
        case 3: { double n; printf("Enter number: "); scanf("%lf",&n); printf("Abs = %lf\n", fabs(n)); break; }
        case 4: { double n; printf("Enter number: "); scanf("%lf",&n); printf("Floor = %lf\n", floor(n)); break; }
        case 5: { double n; printf("Enter number: "); scanf("%lf",&n); printf("Ceiling = %lf\n", ceil(n)); break; }
        default: printf("Invalid choice\n");
    }
    return 0;
}