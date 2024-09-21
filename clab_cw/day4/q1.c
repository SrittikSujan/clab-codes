#include <stdio.h>
int main() {

int a,b,c,d;

printf("Enter the time(in secs): \n");
scanf("%d", &a);

b = a/3600;
c = (a%3600)/60;
d = a%60;

printf("%d second = %d hour, %d minute, %d second\n", a, b, c, d);

return 0;
}
