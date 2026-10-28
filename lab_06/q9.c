#include <stdio.h>

int main() {
    char word[50], rev[50];
    int length = 0, i, j;
    int vowels = 0, consonants = 0, isPalindrome = 1;
    char c;

    printf("Enter a word: ");
    scanf("%s", word);

    // 1. Print original
    printf("Original word: %s\n", word);

    // 2. Length without strlen()
    while (word[length] != '\0')
        length++;
    printf("Length = %d\n", length);

    // 3. Reverse
    j = 0;
    for (i = length - 1; i >= 0; i--) {
        rev[j] = word[i];
        j++;
    }
    rev[j] = '\0';                 // end mark
    printf("Reversed word: %s\n", rev);

    // 4. Palindrome check
    for (i = 0; i < length; i++) {
        if (word[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");

    // 5 and 6. Vowels and consonants
    for (i = 0; i < length; i++) {
        c = word[i];
        if (c >= 'A' && c <= 'Z')
            c = c + 32;            // make lowercase
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
        else if (c >= 'a' && c <= 'z')
            consonants++;
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    return 0;
}