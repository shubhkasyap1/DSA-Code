#include <stdio.h>
#include <stdlib.h>

// Function to count the frequency of an element in an array
int countFrequency(int array[], int size, int element) {
    int frequency = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            frequency++;
        }
    }
    return frequency;
}

int main() {
    
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int* array = (int*)malloc(size * sizeof(int));

    // Ask the user to input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Ask the user for an element
    int element;
    printf("Enter an element: ");
    scanf("%d", &element);

    // Count the frequency of the element
    int frequency = countFrequency(array, size, element);

    // Display the frequency
    if (frequency > 0) {
        printf("The frequency of %d is %d.\n", element, frequency);
    } else {
        printf("%d does not exist in the array.\n", element);
    }

    // Free the dynamically allocated memory
    free(array);

    return 0;
}