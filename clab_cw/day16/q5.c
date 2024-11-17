/*
Write a C program to 
swap the first and last 
element of a 1-D array of 
using a function SWAP.
*/

#include <stdio.h>

// Function to swap the first and last elements of the array
void SWAP(int arr[], int n) {
    // Check if the array has more than one element
    if (n > 1) {
        int temp = arr[0];      // Store the first element in temp
        arr[0] = arr[n - 1];    // Assign the last element to the first position
        arr[n - 1] = temp;      // Assign the stored first element to the last position
    }
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

    // Call the SWAP function to swap the first and last elements
    SWAP(arr, n);

    // Display the array after swapping
    printf("\nArray after swapping the first and last elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}