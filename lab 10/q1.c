#include <stdio.h>
#include <string.h>

int main() {
    char review[500], fixed[600];

   
    printf("Enter customer feedback: ");
    fgets(review, sizeof(review), stdin);
    review[strcspn(review, "\n")] = '\0';  

    /* strlen counts characters */
    printf("Total characters: %d\n", (int)strlen(review));

    
    char *goodPos = strstr(review, "good");
    char *badPos  = strstr(review, "bad");

    if (goodPos != NULL)
        printf("Sentiment: Positive word 'good' found.\n");
    if (badPos != NULL)
        printf("Sentiment: Negative word 'bad' found.\n");
    if (goodPos == NULL && badPos == NULL)
        printf("Sentiment: Neutral (no keyword found).\n");

   
    if (badPos != NULL) {
        int before = badPos - review;      
        fixed[0] = '\0';                   
        strncat(fixed, review, before);     
        strcat(fixed, "not good");          
        strcat(fixed, badPos + 3);         
        strcpy(review, fixed);              
        printf("Updated review: %s\n", review);
    }
    return 0;
}