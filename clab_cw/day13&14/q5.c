/*
WAP to check whether 
two matrices are equal 
or not.
*/

#include <stdio.h>

int main() {
    int rows, cols, isEqual = 1;
    int matrix1[10][10], matrix2[10][10];

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if the matrices are equal
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                isEqual = 0; // Matrices are not equal
                break;
            }
        }
        if (!isEqual) {
            break;
        }
    }

    if (isEqual) {
        printf("The two matrices are equal.\n");
    } else {
        printf("The two matrices are not equal.\n");
    }

    return 0;
}