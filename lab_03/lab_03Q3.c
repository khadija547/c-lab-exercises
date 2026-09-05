#include <stdio.h>

int main(){
    int age;
    float height;
    char grade;

    printf("enter your age");
    scanf(" %d", &age);

    printf("enter your height");
    scanf(" %f", &height);

    printf("enetr your grade");
    scanf(" %c", &grade);

    printf("age: %d\n", age);
    printf("height: %.2f\n", height);
    printf("grade: %c\n", grade);

    return 0;
}
