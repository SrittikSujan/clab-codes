/*
WAP to sort the elements 
of an 1-D array in 
ascending order by using 
a suitable user defined 
function for sort 
operation.
*/

#include <stdio.h>

// Function to sort the array in ascending order
void sort_array(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

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

    // Sort the array using the user-defined function
    sort_array(arr, n);

    // Display the sorted array
    printf("\nThe sorted array in ascending order is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}