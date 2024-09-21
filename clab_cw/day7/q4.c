#include <stdio.h>
int main() {

 float sum,num;
 sum = 0;
 
 for(int i=1; i<11; i++) {
 
  printf("Enter no. %d\n", i);
  scanf("%f", &num);
  sum = sum + num;
  
 }
 
 printf("The sum is %.2f\n", sum);
 printf("And the avg is %.2f\n", (sum/10));
 
return 0;
}
