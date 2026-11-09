#include <stdio.h>
#include <string.h>

int main() {
    char email[100], domain[100];

    printf("Enter email address: ");
    scanf("%99s", email);

    /* strchr finds the first '@'. Returns NULL if not found */
    char *at = strchr(email, '@');

    if (at == NULL) {
        printf("Invalid Email Format\n");
    } else {
        strcpy(domain, at + 1);     /* at+1 = the letter just after '@' */
        printf("Domain: %s\n", domain);
    }
    return 0;
}