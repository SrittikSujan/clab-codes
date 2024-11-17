/*
Write a C program to 
determine the largest and 
smallest element of a 1-D 
array. Use functions 
LARGEST and 
SMALLEST for the given 
purpose.
*/

#include <stdio.h>

// Function to find the largest element in the array
int LARGEST(int arr[], int n) {
    int max = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    return max;
}

// Function to find the smallest element in the array
int SMALLEST(int arr[], int n) {
    int min = arr[0]; // Assume the first element is the smallest
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller element is found
        }
    }
    return min;
}

int main() {
    int n;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Handle invalid or zero size
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call functions to find the largest and smallest elements
    int largest = LARGEST(arr, n);
    int smallest = SMALLEST(arr, n);

    // Output the results
    printf("\nThe largest element in the array is: %d\n", largest);
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}