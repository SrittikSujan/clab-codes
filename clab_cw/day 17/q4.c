/*
Write a C program to find 
the sum of only PRIME 
values in a 2-D array 
using a function 
PRIMESUM.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // num is divisible by i, so it's not prime
        }
    }
    
    return true; // num is prime
}

// Function to calculate the sum of only prime numbers in a 2-D array
int PRIMESUM(int arr[3][3], int rows, int cols) {
    int sum = 0;

    // Traverse the entire 2-D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Check if the current element is prime
            if (isPrime(arr[i][j])) {
                sum += arr[i][j]; // Add the prime number to sum
            }
        }
    }

    return sum;
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

    // Call the function to calculate the sum of prime elements
    int primeSum = PRIMESUM(arr, rows, cols);

    // Output the sum of prime numbers
    printf("\nThe sum of the prime numbers in the 2-D array is: %d\n", primeSum);

    return 0;
}