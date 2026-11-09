#include <stdio.h>
#include <string.h>

int main() {
    char review[500], fixed[600];

    /* fgets reads the WHOLE line, including spaces */
    printf("Enter customer feedback: ");
    fgets(review, sizeof(review), stdin);
    review[strcspn(review, "\n")] = '\0';   /* remove the Enter key character */

    /* strlen counts characters */
    printf("Total characters: %d\n", (int)strlen(review));

    /* strstr returns a pointer to where the word starts, or NULL if absent */
    char *goodPos = strstr(review, "good");
    char *badPos  = strstr(review, "bad");

    if (goodPos != NULL)
        printf("Sentiment: Positive word 'good' found.\n");
    if (badPos != NULL)
        printf("Sentiment: Negative word 'bad' found.\n");
    if (goodPos == NULL && badPos == NULL)
        printf("Sentiment: Neutral (no keyword found).\n");

    /* Replace "bad" with "not good" */
    if (badPos != NULL) {
        int before = badPos - review;       /* how many characters come before "bad" */
        fixed[0] = '\0';                    /* start with an empty string */
        strncat(fixed, review, before);     /* 1) copy the part before "bad" */
        strcat(fixed, "not good");          /* 2) add "not good" */
        strcat(fixed, badPos + 3);          /* 3) add the part after "bad" (skip 3 letters) */
        strcpy(review, fixed);              /* put the result back into review */
        printf("Updated review: %s\n", review);
    }
    return 0;
}