#include <stdio.h>
int main() {

 int n,i,sum;
 
 printf("Enter a number:\n");
 scanf("%d", &n);
 
 sum = 0;
 
 i = 2;
 while (i < n) {
  if (n%i==0) {
   sum = sum + i;
  }
  i++;
 }
  
 if (sum == 0) {
  printf("You have entered %d, which is a prime no.\n", n);
 }
 else if (sum >= 0 && sum <= n) {
  printf("You have entered %d, which is not a prime no.\n", n);
 }
 
return 0;
}
