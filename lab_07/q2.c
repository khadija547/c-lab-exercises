#include <stdio.h>

int main() {
    char logs[3][30];
    int i, j, k, count = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter log entry %d: ", i + 1);
        scanf(" %[^,],%[^,],%[^\n]", logs[0], logs[1], logs[2]);

        for (j = 0; j < 3; j++)
            for (k = 0; logs[j][k] != '\0'; k++)
                if (logs[j][k] >= 'A' && logs[j][k] <= 'Z')
                    count++;
    }

    printf("Total uppercase letters = %d\n", count);
    return 0;
}