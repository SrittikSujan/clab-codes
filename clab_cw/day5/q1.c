#include <stdio.h>
int main() {

float a,b;

printf("Enter first no. :\n");
scanf("%f", &a);
printf("Enter second no. :\n");
scanf("%f", &b);

if(a>b) {
printf("The largest no. is %f\n", a);
}
else {
printf("The largest no. is %f\n", b);
}

return 0;
}
