#include <stdio.h>
int main() {

int a,b,c,d,sum;

printf("Enter a three-digit number: ");
scanf("%d", &a);

c = a%10;
b = a/100;
d = (a/10)%10;
sum = c + b + d;

printf("Sum of all the three digits: %d\n", sum);

return 0;
}
