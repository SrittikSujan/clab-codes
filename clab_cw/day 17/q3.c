/*
Write a C program to 
determine the largest and 
smallest element of a 2-D 
array. Use functions 
LARGEST and 
SMALLEST for the given 
purpose.
*/

#include <stdio.h>

// Function to find the largest element in a 2-D array
int LARGEST(int arr[3][3], int rows, int cols) {
    int largest = arr[0][0]; // Initialize with the first element of the array

    // Traverse the entire 2-D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];  // Update if a larger element is found
            }
        }
    }

    return largest;
}

// Function to find the smallest element in a 2-D array
int SMALLEST(int arr[3][3], int rows, int cols) {
    int smallest = arr[0][0]; // Initialize with the first element of the array

    // Traverse the entire 2-D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < smallest) {
                smallest = arr[i][j];  // Update if a smaller element is found
            }
        }
    }

    return smallest;
}

int main() {
    int arr[3][3];
    int rows = 3, cols = 3;

    // Input the elements of the 2-D array
    printf("Enter the elements of the 3x3 array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the functions to find the largest and smallest elements
    int largest = LARGEST(arr, rows, cols);
    int smallest = SMALLEST(arr, rows, cols);

    // Output the largest and smallest elements
    printf("\nThe largest element in the 2-D array is: %d\n", largest);
    printf("The smallest element in the 2-D array is: %d\n", smallest);

    return 0;
}