#include <stdio.h>

int main() {
    int confidence, userType; // 1=Authorized, 2=Unauthorized
    printf("Enter Confidence (0-100): ");
    scanf("%d", &confidence);
    printf("Enter User Type (1=Authorized, 2=Unauthorized): ");
    scanf("%d", &userType);

    char *status = (confidence >= 80) ? "Face Recognized" : (confidence >= 50) ? "Manual Verification Needed" : "Face Not Recognized";
    printf("%s\n", status);

    if (confidence >= 80 && userType == 1) {
        printf("Access Granted\n");
    } else if (confidence >= 50 && confidence <= 79) {
        printf("Requires Manual Verification\n");
    } else if (confidence < 50 || userType == 2) {
        printf("Access Denied\n");
    }
    return 0;
}