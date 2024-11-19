/*
Input a String Using fgets
*/

#include <stdio.h>

int main() {

    char str[100];

    printf("Enter a string: \n");
    fgets(str, 100, stdin);

    printf("%s", str);
    
    return 0;
}