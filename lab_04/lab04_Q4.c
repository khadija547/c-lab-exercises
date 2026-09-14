#include <stdio.h>

int main() {
    float accuracy, latency;
    int approved;

    printf("Enter model accuracy (%%): ");
    scanf("%f", &accuracy);
    printf("Enter prediction latency (ms): ");
    scanf("%f", &latency);
    printf("Enter model approval status (1 = Approved, 0 = Not Approved): ");
    scanf("%d", &approved);

    if (accuracy >= 90 && latency <= 100 && approved == 1) {
        printf("Model can be deployed.\n");
    } else {
        printf("Model cannot be deployed. Reason(s):\n");
        if (accuracy < 90)
            printf("- Accuracy too low\n");
        if (latency > 100)
            printf("- Latency too high\n");
        if (approved == 0)
            printf("- Model not approved\n");
    }

    return 0;
}