#include <stdio.h>
int main() {

 float n,b,c,f;
 
 printf("Enter the value of n:\n");
 scanf("%f", &n);
 
  b = 0;
  c = 1;
  printf("Here's the Fibonacci series:\n");
  printf("%.2f\n", b);
  printf("%.2f\n", c);
  
 float i = 1;
 while (i <= n-2) {
  f = b + c;
  printf("%.2f\n", f);
  b = c;
  c = f;
  ++i;
 }
 
return 0;
}
