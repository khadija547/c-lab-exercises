#include <stdio.h>

int main() {
    int category, sub;
    printf("1.Animal 2.Vehicle 3.Food 4.Human\nSelect category: ");
    scanf("%d", &category);

    switch(category) {
        case 1: 
            printf("1.Cat 2.Dog 3.Bird\nSelect: ");
            scanf("%d", &sub);
            switch(sub){
                case 1: printf("Animal -> Cat\n"); break;
                case 2: printf("Animal -> Dog\n"); break;
                case 3: printf("Animal -> Bird\n"); break;
            } break;
        case 2:
            printf("1.Car 2.Bus 3.Bike\nSelect: ");
            scanf("%d", &sub);
            switch(sub){
                case 1: printf("Vehicle -> Car\n"); break;
                case 2: printf("Vehicle -> Bus\n"); break;
                case 3: printf("Vehicle -> Bike\n"); break;
            } break;
        case 3:
            printf("1.Pizza 2.Burger 3.Biryani\nSelect: ");
            scanf("%d", &sub);
            switch(sub){
                case 1: printf("Food -> Pizza\n"); break;
                case 2: printf("Food -> Burger\n"); break;
                case 3: printf("Food -> Biryani\n"); break;
            } break;
        case 4:
            printf("1.Male 2.Female 3.Child\nSelect: ");
            scanf("%d", &sub);
            switch(sub){
                case 1: printf("Human -> Male\n"); break;
                case 2: printf("Human -> Female\n"); break;
                case 3: printf("Human -> Child\n"); break;
            } break;
        default: printf("Invalid category\n");
    }
    return 0;
}
