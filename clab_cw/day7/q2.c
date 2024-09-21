#include <stdio.h>
int main() {
 
 int n;
 
 printf("Enter the value of 'n', upto which you want to print natural numbers for.\n");
 scanf("%d", &n);
 
 for(int i = 1; i <= n; i++) {
  printf("%d\n", i);
 }
 
return 0;
}
