#include <stdio.h>

int main() {
    float conf, threshold;
    printf("Enter Model Confidence: ");
    scanf("%f", &conf);
    printf("Enter Required Threshold: ");
    scanf("%f", &threshold);

    if (conf >= 90) printf("Very High\n");
    else if (conf >= 75) printf("High\n");
    else if (conf >= 50) printf("Moderate\n");
    else printf("Low\n");

    if (conf >= threshold && conf >= 50) printf("Accepted\n");
    else printf("Not Accepted\n");
    return 0;
}