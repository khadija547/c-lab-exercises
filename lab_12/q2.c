#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    char **feedback = NULL;          // array of string pointers
    char temp[200];                  // temporary box to read one line
    int totalChars = 0, maxLen = 0, longestIndex = 0;

    // 1. Number of feedback entries
    printf("Enter number of feedback entries: ");
    scanf("%d", &n);

    // 2. Grow the pointer array with realloc, one entry at a time
    for (i = 0; i < n; i++)
    {
        char **t = (char **)realloc(feedback, (i + 1) * sizeof(char *));
        if (t == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
        feedback = t;

        printf("Enter feedback %d: ", i + 1);
        scanf(" %199[^\n]", temp);

        feedback[i] = (char *)malloc(strlen(temp) + 1);   // own memory per string
        if (feedback[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
        strcpy(feedback[i], temp);                         // copy into it
    }

    // 3 and 4. Count characters and find the longest using a pointer
    for (i = 0; i < n; i++)
    {
        char *p = feedback[i];       // p starts at the first character
        while (*p != '\0')           // walk until the end
            p++;

        int len = p - feedback[i];   // distance walked = length
        totalChars = totalChars + len;

        if (len > maxLen)
        {
            maxLen = len;
            longestIndex = i;
        }
    }

    // 5. Display everything
    printf("\n----- All Feedback -----\n");
    for (i = 0; i < n; i++)
        printf("%d. %s\n", i + 1, feedback[i]);

    printf("\nTotal characters = %d\n", totalChars);
    printf("Longest feedback (%d characters): %s\n", maxLen, feedback[longestIndex]);

    // 6. Free: each string first, then the pointer array
    for (i = 0; i < n; i++)
        free(feedback[i]);
    free(feedback);

    return 0;
}