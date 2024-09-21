#include <stdio.h>
int main() {

  int a,b,c,d,e;
 
  printf("Enter your total marks:\n");
  scanf("%d", &a);
  printf("Enter your total marks obtained in maths and physics:\n");
  scanf("%d", &b);
  printf("Enter your marks in maths:\n");
  scanf("%d", &c);
  printf("Enter your marks in physics:\n");
  scanf("%d", &d);
  printf("Enter your marks in chemistry:\n");
  scanf("%d", &e);
  
  if(a>=190 || b>=140) {
  
    if(c>=65 && d>=55 && e>=50) {
     printf("The candidate is eligible for admissions.\n");
    }
  }
  else {
    printf("The candidate is not eligible for admissions.\n");
  }
    
return 0;
}
