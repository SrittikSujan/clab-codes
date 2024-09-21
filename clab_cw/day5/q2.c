#include <stdio.h>
int main() {

char ch;

printf("Enter an alphabet: \n");
scanf("%c", &ch);

if(ch>='a' && ch<='z') {
printf("The upper case of the entered letter is: %c\n", ch-32);
}
else {
printf("You have entered \'%c\' which is already in upper case\n", ch);
}
return 0;
}
