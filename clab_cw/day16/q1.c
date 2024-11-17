/*
WAP to design a user 
defined function to 
calculate the sum of the 
elements of an integer 1
D array
*/

#include <stdio.h>

// Function to calculate the sum of the elements of a 1D array
int calculate_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to the sum
    }
    return sum;
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

    // Calculate the sum using the user-defined function
    int result = calculate_sum(arr, n);

    printf("\nThe sum of the array elements is: %d\n", result);

    return 0;
}