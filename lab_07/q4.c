#include <stdio.h>

int main() {
    char word_grid[3][100];
    int i, k, len, col;
    int maxLen = 0, maxRow = 0, maxCol = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter line %d (3 words): ", i + 1);
        scanf(" %[^\n]", word_grid[i]);
    }

    for (i = 0; i < 3; i++) {
        len = 0;
        col = 0;
        for (k = 0; ; k++) {
            if (word_grid[i][k] != ' ' && word_grid[i][k] != '\0') {
                len++;                           // still inside a word
            } else {
                if (len > maxLen) {              // word just ended
                    maxLen = len;
                    maxRow = i;
                    maxCol = col;
                }
                len = 0;
                col++;                           // next word number
            }
            if (word_grid[i][k] == '\0')
                break;
        }
    }

    printf("Longest word length = %d\n", maxLen);
    printf("Row index = %d, Column index = %d\n", maxRow, maxCol);
    return 0;
}