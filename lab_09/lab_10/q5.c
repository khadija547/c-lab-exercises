#include <stdio.h>
#include <string.h>

/* credentials.txt example (one line):
admin pass123
*/
int main() {
    char user[50], pass[50];            /* typed by the operator */
    char fileUser[50], filePass[50];    /* saved in the file */

    printf("Enter username: ");
    scanf("%49s", user);
    printf("Enter password: ");
    scanf("%49s", pass);

    FILE *fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open credentials file!\n");
        return 1;
    }

    fscanf(fptr, "%49s %49s", fileUser, filePass);

    /* strcmp returns 0 when both strings are exactly equal */
    if (strcmp(user, fileUser) == 0 && strcmp(pass, filePass) == 0)
        printf("Access Granted!\n");
    else
        printf("Access Denied!\n");

    fclose(fptr);
    return 0;
}