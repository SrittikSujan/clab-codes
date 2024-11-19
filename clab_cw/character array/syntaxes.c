#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];

    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    printf("Concatenated String: %s\n", str3);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    printf("Length of str1: %lu\n", strlen(str1));

    char buffer[10];
    memset(buffer, '-', 9);
    buffer[9] = '\0';
    printf("Buffer after memset: %s\n", buffer);

    return 0;
}