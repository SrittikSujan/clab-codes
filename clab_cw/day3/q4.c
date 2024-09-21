#include<stdio.h>
int main() {
float a,b,c,d;
printf("Enter a random heihght: ");
scanf("%f",&a);
printf("Enter a random base: ");
scanf("%f",&b);
c = 0.5;
d = c*b*a;
printf("The area of the triangle is :%.2f\n",d);
return 0;
}
