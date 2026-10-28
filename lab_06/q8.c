#include <stdio.h>

int main() {
    int arr[10], size = 8, i;
    int largest, smallest, key, found, pos, value;

    // 2. Take 8 elements
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Print array
    printf("Array: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // 4. Largest and smallest
    largest = arr[0];
    smallest = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    // 5. Search
    printf("Enter number to search: ");
    scanf("%d", &key);
    found = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found == -1)
        printf("Number not found\n");
    else
        printf("Found at index %d\n", found);

    // 6. Insert
    printf("Enter index to insert at (0 to %d): ", size);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);
    for (i = size; i > pos; i--)
        arr[i] = arr[i - 1];      // shift right
    arr[pos] = value;
    size++;

    // 7. Delete
    printf("Enter index to delete (0 to %d): ", size - 1);
    scanf("%d", &pos);
    for (i = pos; i < size - 1; i++)
        arr[i] = arr[i + 1];      // shift left
    size--;

    // 8. Final array
    printf("Final array: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}