#include <stdio.h>

/* marks.txt example (one student per line):
101 Ali 85
102 Sara 92
*/
int main() {
    int roll, marks;
    char name[50];

    FILE *fptr = fopen("marks.txt", "r");      /* "r" = read */

    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }

    printf("%-10s %-20s %-5s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------\n");

    /* fscanf returns how many values it read. We expect 3 per line.
       When the file ends it returns EOF, so the loop stops. */
    while (fscanf(fptr, "%d %49s %d", &roll, name, &marks) == 3) {
        printf("%-10d %-20s %-5d\n", roll, name, marks);
    }

    fclose(fptr);
    return 0;
}