#include <stdio.h>
#include<stdlib.h>

// Function to find the maximum and minimum elements in an array
void findMaxMin(int array[], int size, int* max, int* min, int* maxPos, int* minPos) {
    *max = array[0];
    *min = array[0];
    *maxPos = 0;
    *minPos = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] > *max) {
            *max = array[i];
            *maxPos = i;
        } else if (array[i] < *min) {
            *min = array[i];
            *minPos = i;
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int* array = (int*)malloc(size * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int max, min, maxPos, minPos;

    // Call the function 
    findMaxMin(array, size, &max, &min, &maxPos, &minPos);

    // Display the maximum and minimum values along with their positions
    printf("Maximum element: %d at position %d\n", max, maxPos + 1);
    printf("Minimum element: %d at position %d\n", min, minPos + 1);

    // Free the dynamically allocated memory
    free(array);

    return 0;
}