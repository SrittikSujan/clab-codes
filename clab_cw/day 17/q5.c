/*
Write a C program to 
perform addition of two 
matrices and display the 
result using 3rd matrix. 
Use a function 
ADDMATRIX
*/

#include <stdio.h>

// Function to perform the addition of two matrices
void ADDMATRIX(int mat1[3][3], int mat2[3][3], int result[3][3], int rows, int cols) {
    // Traverse the matrices and add corresponding elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j]; // Add corresponding elements
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];
    int rows = 3, cols = 3;

    // Input the elements of the first matrix
    printf("Enter the elements of the first 3x3 matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter the elements of the second 3x3 matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Call the function to add the matrices
    ADDMATRIX(mat1, mat2, result, rows, cols);

    // Display the result matrix
    printf("\nThe result of matrix addition is:\n");
    displayMatrix(result, rows, cols);

    return 0;
}