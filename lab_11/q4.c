#include <stdio.h>

struct Address
{
    char City[20];
    int ZipCode;
    char State[20];
};

struct Student
{
    int RollNo;
    char Name[30];
    float CGPA;
    struct Address studentAddress;   // embedded Address
};

int main()
{
    struct Student student1 = {
        101,
        "Ayesha",
        3.45,
        {"Karachi", 75000, "Sindh"}   // inner values in their own braces
    };

    printf("----- Student Profile -----\n");
    printf("Roll No: %d\n", student1.RollNo);
    printf("Name: %s\n", student1.Name);
    printf("CGPA: %.2f\n", student1.CGPA);
    printf("City: %s\n", student1.studentAddress.City);
    printf("Zip Code: %d\n", student1.studentAddress.ZipCode);
    printf("State: %s\n", student1.studentAddress.State);

    return 0;
}