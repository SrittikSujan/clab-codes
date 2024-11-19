/*
WAP to find the sum of 
elements of a matrix in 
its upper triangle.
*/

#include <stdio.h>

int main() {
    int n, matrix[10][10], sum = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the sum of the upper triangle
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) { // j starts from i to include only upper triangle elements
            sum += matrix[i][j];
        }
    }

    printf("The sum of the upper triangle elements is: %d\n", sum);

    return 0;
}