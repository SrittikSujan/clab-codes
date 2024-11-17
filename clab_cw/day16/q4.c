/*
Write a C program to 
determine the second 
largest element of a 1-D 
array of using a function 
SECLARGEST.
*/

#include <stdio.h>

// Function to find the second largest element in the array
int SECLARGEST(int arr[], int n) {
    int largest, secondLargest;

    if (n < 2) {
        printf("Array size should be at least 2.\n");
        return -1;  // Return an error if there are not enough elements
    }

    // Initialize largest and second largest
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Traverse the array to find the second largest
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int n;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Handle invalid or zero size
    if (n <= 1) {
        printf("Array size should be at least 2.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the function to find the second largest element
    int secondLargest = SECLARGEST(arr, n);

    if (secondLargest != -1) {
        printf("\nThe second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}