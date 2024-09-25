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

    // Initialize counters for even and odd numbers
    int evenCount = 0;
    int oddCount = 0;

    // Initialize arrays to store even and odd numbers
    int evenArr[n];
    int oddArr[n];

    // Initialize indices for even and odd arrays
    int evenIndex = 0;
    int oddIndex = 0;

    // Count even and odd numbers and store them in separate arrays
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
            evenArr[evenIndex++] = arr[i];
        } else {
            oddCount++;
            oddArr[oddIndex++] = arr[i];
        }
    }

    // Display the counts of even and odd numbers
    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);

    // Display the even numbers
    printf("Even numbers:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("arr[%d] = %d\n", i, evenArr[i]);
    }

    // Display the odd numbers
    printf("Odd numbers:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("arr[%d] = %d\n", i, oddArr[i]);
    }

    return 0;
}