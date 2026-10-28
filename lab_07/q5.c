#include <stdio.h>

int main() {
    char sentences[3][100];
    int i, k, vowels;
    char c;

    printf("Enter paragraph (3 sentences with ;): ");
    for (i = 0; i < 3; i++) {
        scanf("%[^;]%*c", sentences[i]);    // read until ; then throw ; away
    }

    for (i = 0; i < 3; i++) {
        vowels = 0;
        for (k = 0; sentences[i][k] != '\0'; k++) {
            c = sentences[i][k];
            if (c >= 'A' && c <= 'Z')
                c = c + 32;                 // make lowercase
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
        }
        printf("Sentence %d: %s | Vowels = %d\n", i + 1, sentences[i], vowels);
    }
    return 0;
}