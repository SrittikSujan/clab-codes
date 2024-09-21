#include <stdio.h>
int main() {
float a, b;

printf("Enter value of a: ");
scanf("%f", &a);
printf("Enter value of b: ");
scanf("%f", &b);

printf("Before swapping: a = %f, b = %f\n", a, b);

// Swapping done using algebraic method.
a = a + b;
b = a - b;
a = a - b;

printf("After swapping: a = %f, b = %f\n", a, b);

return 0;
}
