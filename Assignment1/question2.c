#include <stdio.h>

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    // Check for boundary cases
    if (n <= 0) {
        printf("Invalid size. n must be a positive integer.\n");
        return 1;
    }

    // Initialize the array
    int arr[n];

    // Take n integer inputs from the user to populate the array
    printf("Enter %d integer values:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the contents of the array
    printf("Array contents:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Insert a new element at a specified position
    int pos, newVal;
    printf("Enter the position (1-%d) to insert a new element: ", n);
    scanf("%d", &pos);

    // Check for validity of the position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position. Must be between 1 and %d.\n", n + 1);
        return 1;
    }

    printf("Enter the new element value: ");
    scanf("%d", &newVal);

    // Shift elements to make space for the new element
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = newVal;

    // Update the size of the array
    n++;

    // Display the updated array contents
    printf("Updated array contents:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}