#include <stdio.h>

int main(){
    char name[50];

    printf("enter your full name");
    scanf(" %[^\n]", name);

    printf("hello,\n");
    printf("%s", name);

    return 0;


}