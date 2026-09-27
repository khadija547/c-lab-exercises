#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence;
    int datasetSize, userRole, modelStatus, permission;
    printf("Enter Accuracy, Confidence, DatasetSize: ");
    scanf("%f %f %d", &accuracy, &confidence, &datasetSize);
    printf("User Role (1=Admin,2=Developer,3=Researcher): ");
    scanf("%d", &userRole);
    printf("Model Status (1=Ready,2=Testing,3=Training): ");
    scanf("%d", &modelStatus);
    printf("Permission (View=1,Train=2,Test=4,Deploy=8): ");
    scanf("%d", &permission);

    float modelScore = (accuracy + confidence) / 2.0;
    printf("Model Score: %.2f\n", modelScore);
    printf("sizeof(modelScore)= %zu bytes\n", sizeof(modelScore));

    int hasDeploy = (permission & 8);

    if (accuracy >= 80 && confidence >= 75 && datasetSize >= 1000 && modelStatus == 1 && hasDeploy) {
        printf("Deployment Ready\n");
    } else {
        printf("Not Ready for Deployment\n");
    }

    switch(userRole){
        case 1: printf("Role: Admin\n"); break;
        case 2: printf("Role: Developer\n"); break;
        case 3: printf("Role: Researcher\n"); break;
    }

    switch(modelStatus){
        case 1: printf("Status: Ready\n"); break;
        case 2: printf("Status: Testing\n"); break;
        case 3: printf("Status: Training\n"); break;
    }
    return 0;
}