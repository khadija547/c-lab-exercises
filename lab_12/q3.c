#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int containsDigit(char *str)
{
    while (*str != '\0')
    {
        if (isdigit(*str))
            return 1;          // found a digit
        str++;                 // next character
    }
    return 0;                  // no digit found
}

int isAllAlpha(char *str)
{
    while (*str != '\0')
    {
        if (!isalpha(*str))
            return 0;
        str++;
    }
    return 1;
}

int main()
{
    int n, i, j, count;
    char **names;
    char temp[50];

    // 1. Ask for N and allocate the array of pointers
    printf("Enter number of usernames: ");
    scanf("%d", &n);

    names = (char **)malloc(n * sizeof(char *));
    if (names == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read each username and give it its own memory
    for (i = 0; i < n; i++)
    {
        printf("Enter username %d: ", i + 1);
        scanf("%49s", temp);

        names[i] = (char *)malloc(strlen(temp) + 1);
        if (names[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
        strcpy(names[i], temp);
    }

    count = n;   // how many usernames are currently in the list

    // 2. Remove usernames that contain a digit
    i = 0;
    while (i < count)
    {
        if (containsDigit(names[i]))
        {
            free(names[i]);                    // free the string
            for (j = i; j < count - 1; j++)    // shift left
                names[j] = names[j + 1];
            count--;                           // list is shorter now
            // do NOT do i++ here
        }
        else
        {
            i++;
        }
    }

    // 3. Display only alphabetic usernames
    printf("\nValid usernames:\n");
    for (i = 0; i < count; i++)
    {
        if (isAllAlpha(names[i]))
            printf("%s\n", names[i]);
    }

    // 4. Free memory: each string first, then the array
    for (i = 0; i < count; i++)
        free(names[i]);
    free(names);

    return 0;
}