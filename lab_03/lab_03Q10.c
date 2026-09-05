#include <stdio.h>

int main(){
    char student_name[50];
    int age;
    float height;
    char grade;
    float CGPA;

    printf("Enter student name:");
    scanf("%[^\n]", student_name);

    printf("Enter age:");
    scanf(" %d", &age);

    printf("Enter height:");
    scanf(" %f", &height);

    printf("Enter grade:");
    scanf(" %c", &grade);

    printf("Enter CGPA:");
    scanf(" %f", &CGPA);

    printf("========== STUDENT REPORT ==========\n");

    printf("Name : %s\n", student_name);
    printf("Age : %d\n",age);
    printf("Height : %.2f\n", height);
    printf("Grade : %c\n", grade);
    printf("CGPA : %.2f\n", CGPA);

    return 0;
}
