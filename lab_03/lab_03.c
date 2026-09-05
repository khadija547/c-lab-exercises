#include <stdio.h>

int main(){g
    char name[50];
    int age;
    char city[50];

    printf("enter your name");
    scanf(" %[^\n]",name);

    printf("enter your age");
    scanf(" %d", &age);

    printf("enter your city");
    scanf(" %[^\n]",city);

    printf("Name: %s\n",name);
    printf("age: %d\n",age);
    printf("City: %s\n",city);

    return 0;
}