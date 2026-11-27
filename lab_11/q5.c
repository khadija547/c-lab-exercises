#include <stdio.h>

struct HospitalRecord
{
    int admissionId;
    char ward[20];

    struct PatientInfo            // inner struct defined INSIDE outer
    {
        int patientId;
        char name[30];
        int age;
    } patient;                    // member name
};

int main()
{
    struct HospitalRecord rec = {
        5001,
        "Emergency",
        {301, "Ali Raza", 45}
    };

    struct HospitalRecord *ptr;   // pointer variable
    ptr = &rec;                   // store address of rec in ptr

    printf("----- Hospital Record -----\n");

    // Outer members: arrow operator
    printf("Admission ID: %d\n", ptr->admissionId);
    printf("Ward: %s\n", ptr->ward);

    // Inner members: arrow first, then dot
    printf("Patient ID: %d\n", ptr->patient.patientId);
    printf("Name: %s\n", ptr->patient.name);
    printf("Age: %d\n", ptr->patient.age);

    // Same thing using dot only (no pointer)
    printf("\nUsing dot: %s\n", rec.patient.name);

    return 0;
}