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

    // Delete an element at a specified position
    int pos;
    printf("Enter the position (1-%d) to delete an element: ", n);
    scanf("%d", &pos);

    // Check for validity of the position
    if (pos < 1 || pos > n) {
        printf("Invalid position. Must be between 1 and %d.\n", n);
        return 1;
    }

    // Shift elements to fill the gap
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Update the size of the array
    n--;

    // Display the updated array contents
    printf("Updated array contents:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}