#include <stdio.h>
#include <math.h>

int main() {
 
 float a,b,c,d,y1,y2,rp,ip;
 
 printf("Enter value of a: \n");
 scanf("%f", &a);
 printf("Enter value of b: \n");
 scanf("%f", &b);
 printf("Enter value of c: \n");
 scanf("%f", &c);
 
 d = (b*b) - (4*a*c);
 y1 = (-b + sqrt(d))/(2*a);
 y2 = (-b - sqrt(d))/(2*a);
 
 if (d>0) {
  printf("The roots are real and unequal.\n");
  printf("And the roots are %f and %f, respectively.\n", y1, y2);
 }
 else if (d==0) {
  printf("The roots are real and equal.\n");
  printf("And the roots are %f and %f, respectively.\n", y1, y2);
 }
 else if (d<0) {
  printf("The roots are imaginary.\n");
  rp = -b / (2*a);
  ip = sqrt(-d) / (2*a);
  printf("And the imaginary roots are\n%f + %fi and %f - %fi, respectively.\n", rp, ip, rp, ip);
 }

return 0;
}
