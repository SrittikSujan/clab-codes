#include <stdio.h>
int main()
{

   int a, b;
   char c;
   float res;

   printf("Enter two numbers: \n");
   scanf("%d"
         "%d",
         &a, &b);

   printf("\nSelect the operation from the menu:\n");
   printf("A for Add\n");
   printf("S for Subtract\n");
   printf("M for Multiplication\n");
   printf("D for division\n");
   scanf(" %c", &c);

   switch (c)
   {

   case 'A':
   case 'a':
      res = a + b;
      printf("The Sum is: %.2f\n", res);
      break;
   case 'S':
   case 's':
      res = a - b;
      printf("The substraction is: %.2f\n", res);
      break;
   case 'M':
   case 'm':
      res = a * b;
      printf("The product is: %.2f\n", res);
      break;
   case 'D':
   case 'd':

      if (b != 0)
      {
         res = a / b;
         printf("The division is: %.2f\n", res);
      }
      else
      {
         printf("The division is not possible!\n");
      }

      break;

   default:
      printf("Invalid choice. Please select a valid option (A,S,M,D).\n");
   }

   return 0;
}
