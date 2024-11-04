/*
WAP to delete an element at 
desired position from an 
array.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the size of an Array:\n");
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter no. %d\n", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\n");

    printf("The current list is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }
    printf("\n\n");

    int deleted_position;
    printf("Enter the position to be deleted from the Array\n");
    scanf("%d", &deleted_position);
    printf("\n");

    deleted_position = deleted_position - 1; // converting the position to index no.

    for (int i = deleted_position + 1; i < n; i++)
    {
        num[i - 1] = num[i];
    }
    
    printf("The updated list is:\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d  ", num[i]);
    }
    

    return 0;
}