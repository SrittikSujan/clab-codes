/*
WAP to find out the 
maximum element of an 
integer array by using 
recursion.
*/

#include <stdio.h>

int find_max(int arr[], int n) {
    if (n == 1) return arr[0];

    int max_of_rest = find_max(arr, n - 1);
    return (arr[n - 1] > max_of_rest) ? arr[n - 1] : max_of_rest;
}

int main() {
    int n;

    printf("\nEnter array size: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\nInvalid array size.\n\n");
        return 1;
    }

    int arr[n];

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Enter no. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int result = find_max(arr, n);
    printf("\nThe greatest element in the array is: %d\n\n", result);

    return 0;
}