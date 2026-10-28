#include <stdio.h>

void printSensorData(void *data, char type) {
    if (type == 'f') {
        float *t = (float *)data;          // label the box as float
        printf("Temperature: %.1f C\n", *t);
    }
    else if (type == 'i') {
        int *m = (int *)data;              // label the box as int
        if (*m == 1)
            printf("Motion Detected\n");
        else if (*m == 0)
            printf("No Motion\n");
    }
    else if (type == 'c') {
        char *d = (char *)data;            // label the box as char
        if (*d == 'O')
            printf("Door Open\n");
        else if (*d == 'C')
            printf("Door Closed\n");
    }
    else {
        printf("Unknown data type\n");
    }
}

int main() {
    float temperature = 27.5;
    int motion = 1;
    char door = 'C';

    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');
    return 0;
}