#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

// Function to calculate the average of an array
double calculateAverage(int array[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
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

    // Call the function to find the maximum and minimum elements
    findMaxMin(array, size, &max, &min, &maxPos, &minPos);

    // Calculate the average of the array
    double average = calculateAverage(array, size);

    printf("Maximum element: %d at position %d\n", max, maxPos + 1);
    printf("Minimum element: %d at position %d\n", min, minPos + 1);
    printf("Average: %.2f\n", average);

    // Determine whether the average is closer to the minimum or maximum value
    if (fabs(average - min) < fabs(average - max)) {
        printf("The average is closer to the minimum value.\n");
    } else if (fabs(average - min) > fabs(average - max)) {
        printf("The average is closer to the maximum value.\n");
    } else {
        printf("The average is equal to both the minimum and maximum values.\n");
    }

    // Free the dynamically allocated memory
    free(array);

    return 0;
}