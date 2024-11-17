/*
Write a C program to 
determine the sum of 
main diagonal elements 
of a 2-D array of size 3x3 
using a function 
SUMDIAGONAL.
*/

#include <stdio.h>

// Function to calculate the sum of the main diagonal elements of a 2-D array
int SUMDIAGONAL(int arr[3][3]) {
    int sum = 0;
    
    // Traverse the main diagonal (arr[i][i])
    for (int i = 0; i < 3; i++) {
        sum += arr[i][i];  // Add the element at arr[i][i] to sum
    }

    return sum;
}

int main() {
    int arr[3][3];

    // Input the elements of the 3x3 2-D array
    printf("Enter the elements of the 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the function to calculate the sum of main diagonal elements
    int diagonalSum = SUMDIAGONAL(arr);

    // Output the sum of the main diagonal elements
    printf("\nThe sum of the main diagonal elements is: %d\n", diagonalSum);

    return 0;
}