#include <stdio.h>
#include <math.h>
int main() {

 float a,b,c,d,y1,y2,y3,y4,r1,i1;
 int c1;
 
 printf("Enter value of a: \n");
 scanf("%f", &a);
 printf("Enter value of b: \n");
 scanf("%f", &b);
 printf("Enter value of c: \n");
 scanf("%f", &c);
 
 d = (b*b) - (4*a*c);
 
 if(d>0) {
  c1 = 1;
 }
 else if(d==0) {
  c1 = 2;
 }
 else if(d<0) {
  c1 = 3;
 }
 
 switch(c1) {
  case 1:
   y1 = (-b + sqrt(d))/2*a;
   y2 = (-b - sqrt(d))/2*a;
   printf("The roots are real and unequal.\n");
   printf("The roots are %f and %f respectively\n", y1, y2);
   break;
  case 2:
   y3 = (-b + sqrt(d))/2*a;
   y4 = (-b - sqrt(d))/2*a;
   printf("The roots are real and equal\n");
   printf("The roots are %f and %f respectively\n", y3, y4);
   break;
  case 3:
   printf("The roots are imaginary\n");
   r1 = (-b/(2*a));
   i1 = ((sqrt(-d))/(2*a));
   printf("And the roots are %f + %fi and %f - %fi respectively\n", r1,i1,r1,i1);
 default:
 }

return 0;
}
