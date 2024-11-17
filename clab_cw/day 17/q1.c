/*
Write a C program to 
determine the sum of 
elements of a 2-D array 
using a function 
ELESUM.
*/

#include <stdio.h>

// Function to calculate the sum of elements of a 2-D array
int ELESUM(int arr[][100], int rows, int cols) {
    int sum = 0;

    // Traverse the entire 2-D array and sum the elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2-D array based on the input rows and columns
    int arr[rows][cols];

    // Input the elements of the 2-D array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the function to calculate the sum of elements
    int sum = ELESUM(arr, rows, cols);

    // Output the sum
    printf("\nThe sum of the elements in the 2-D array is: %d\n", sum);

    return 0;
}