/*
Write a C program to 
perform swapping of two 
integers using a function 
SWAP.
*/


#include <stdio.h>

// Function to swap two integers
void SWAP(int *a, int *b) {
    int temp = *a;  // Store the value of *a in a temporary variable
    *a = *b;        // Assign the value of *b to *a
    *b = temp;      // Assign the value of temp to *b
}

int main() {
    int x, y;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    // Call the SWAP function
    SWAP(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}