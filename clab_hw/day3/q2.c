#include <stdio.h>
int main() {

float a,b,c,d,e;

printf("Enter the marks of first subject: \n");
scanf("%f", &a);
printf("Enter the marks of second subject: \n");
scanf("%f", &b);
printf("Enter the marks of third subject: \n");
scanf("%f", &c);
printf("Enter the marks of fourth subject: \n");
scanf("%f", &d);
printf("Enter the marks of fifth subject: \n");
scanf("%f", &e);

printf("The avg is: %f\n", (a+b+c+d+e)/5 );
printf("The percentage is: %f\n", (a+b+c+d+e)/1000*100);

return 0;
}
