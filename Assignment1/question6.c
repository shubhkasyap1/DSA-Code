#include <stdio.h>

// Function to reverse the array
void reverseArray(int arr[], int n, int reversedArr[]) {
    for (int i = 0; i < n; i++) {
        reversedArr[i] = arr[n - i - 1];
    }
}

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

    // Initialize the reversed array
    int reversedArr[n];

    // Reverse the array
    reverseArray(arr, n, reversedArr);

    // Display the original array
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ",  arr[i]);
    }
    printf("\n");

    // Display the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ",reversedArr[i]);
    }

    return 0;
}