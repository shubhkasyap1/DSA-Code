#include <stdio.h>

// Function to search for an element in the array
void searchElement(int arr[], int n, int target) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at position %d\n", target, i + 1);
            found = 1;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", target);
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

    // Get the target element from the user
    int target;
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Search for the element
    searchElement(arr, n, target);

    return 0;
}