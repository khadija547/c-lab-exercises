#include <stdio.h>

int main(){
    float a, b, c;
    
    printf("enter three numbers");
    scanf("%f %f %f",&a ,&b ,&c);

    if(a==b && b==c){
        printf("all numbers are equal.\n");
    }
    else if(a>=b && a>=c){
        printf("the greatest number is: %.2f\n", a);
    }
    else if(b>=c && b>=a){
        printf("greatest number is: %.2f\n", b);
    }
    else {
         printf("the greatest number is: %.2f", c);
    }

    return 0;
}