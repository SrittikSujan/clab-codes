/*
Input and Print a String
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[20];

    printf("\nEnter the string: ");
    scanf("%s", &str1);
    
    printf("\n%s\n\n", str1);

    return 0;
}