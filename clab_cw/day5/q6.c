#include <stdio.h>
int main() {
 
 int a;
 
 printf("Enter total mark secured by a student: \n");
 scanf("%d", &a);
 
 if(a>=0 && a<=100) {
  
  if(a>=90 && a<=100) {
   printf("Secured grade is: O\n");
  }
  else if(a>=80 && a<90) {
   printf("Secured grade is: E\n");
  }
  else if(a>=70 && a<80) {
   printf("Secured grage is: A\n");
  }
  else if(a>=60 && a<70) {
   printf("Secured grade is: B\n");
  }
  else if(a>=50 && a<60) {
   printf("Secured grade is: C\n");
  }
  else if(a>=40 && a<50) {
   printf("Secured grade is: D\n");
  }
  else if(a<40) {
   printf("Secured grade is: F\n");
  }
 
 }
 else {
  printf("The total marks is out of range from the grading system.\n");
 }

return 0;
}
