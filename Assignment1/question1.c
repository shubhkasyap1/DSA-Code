#include <stdio.h>
int main() {
    int n;
    // Get the size of the array from the user
    printf("Enter the size of the array (N): ");
    scanf("%d", &n);

    // Check for boundary cases
    if (n <= 0) {
        printf("Invalid size. N must be a positive integer.\n");
        return 1;
    }

    // Initialize the array
    int arr[n];

    // Take N integer inputs from the user to populate the array
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
    return 0;
}