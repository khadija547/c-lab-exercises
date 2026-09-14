#include <stdio.h>

int main() {
    int role, status, security;

    printf("Enter user role (1=Admin, 2=Researcher, 3=Student): ");
    scanf("%d", &role);
    printf("Enter account status (1=Active, 0=Inactive): ");
    scanf("%d", &status);
    printf("Enter security level: ");
    scanf("%d", &security);

    if (status == 0) {
        printf("Access Denied\n");
    }
    else if (role == 1 && security >= 3) {
        printf("Access Granted: Admin\n");
    }
    else if (role == 2 && security >= 2) {
        printf("Access Granted: Researcher\n");
    }
    else if (role == 3 && security >= 1) {
        printf("Access Granted: Student\n");
    }
    else {
        printf("Access Denied\n");
    }

    return 0;
}