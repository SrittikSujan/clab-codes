/*
Write a C program to 
determine whether a 
number is prime or not 
using a function named as 
“PRIME”.
*/

#include <stdio.h>

// Function to determine whether a number is prime
int PRIME(int n) {
    if (n <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }
    return 1; // Prime number
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (PRIME(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
