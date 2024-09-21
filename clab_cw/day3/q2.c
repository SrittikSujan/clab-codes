#include<stdio.h>
int main() {
float a;
printf("Enter a random temperature in centigrade: "); //user will give input here
scanf("%f", &a);
float b = a*1.8 + 32;
printf("In farenhite, the temperature should be: %.2f\n",b);
return 0;
}
