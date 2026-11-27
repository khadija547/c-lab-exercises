#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 = Upper, 2 = Lower, 3 = Digit, 4 = Special
int getCategory(char c)
{
    if (c >= 'A' && c <= 'Z') return 1;
    if (c >= 'a' && c <= 'z') return 2;
    if (c >= '0' && c <= '9') return 3;
    return 4;
}

float similarity(char *pattern, char *attempt)
{
    int lenP = strlen(pattern);
    int lenA = strlen(attempt);
    int minLen = (lenP < lenA) ? lenP : lenA;
    int maxLen = (lenP > lenA) ? lenP : lenA;
    int i, matches = 0;

    for (i = 0; i < minLen; i++)
    {
        if (getCategory(pattern[i]) == getCategory(attempt[i]))
            matches++;
    }
    return (float)matches / maxLen * 100;
}

int main()
{
    int n, i, bestIndex = 0;
    char **attempts;
    char *pattern;
    char temp[50];
    float score, bestScore = -1;

    // 1. Number of participants, allocate array of pointers
    printf("Enter number of participants: ");
    scanf("%d", &n);

    attempts = (char **)malloc(n * sizeof(char *));
    if (attempts == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // 2. Read the pattern
    printf("Enter password pattern: ");
    scanf("%49s", temp);
    pattern = (char *)malloc(strlen(temp) + 1);
    if (pattern == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(pattern, temp);

    // 3. Read each attempt using DMA
    for (i = 0; i < n; i++)
    {
        printf("Enter password attempt %d: ", i + 1);
        scanf("%49s", temp);
        attempts[i] = (char *)malloc(strlen(temp) + 1);
        if (attempts[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
        strcpy(attempts[i], temp);
    }

    // 4. Show each password with its score, track the best
    printf("\n----- Results -----\n");
    for (i = 0; i < n; i++)
    {
        score = similarity(pattern, attempts[i]);
        printf("%d. %s -> %.2f%%\n", i + 1, attempts[i], score);

        if (score > bestScore)
        {
            bestScore = score;
            bestIndex = i;
        }
    }

    // 5. Highest similarity
    printf("\nHighest similarity: %s (%.2f%%)\n", attempts[bestIndex], bestScore);

    // 6. Free everything
    for (i = 0; i < n; i++)
        free(attempts[i]);
    free(attempts);
    free(pattern);

    return 0;
}