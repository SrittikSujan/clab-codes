/*
WAP to Count the total 
number of duplicate elements 
in an array.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the size of an Array:\n");
    scanf("%d", &n);

    int num[n];
    int counter[n]; // will use this array for counting duplicate elements
    for (int i = 0; i < n; i++)
    {
        printf("Enter no. %d\n", i + 1);
        scanf("%d", &num[i]);
        counter[i] = 0;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (counter[i] == 1)
        continue;

        int is_duplicate = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                counter[j] = 1;
                is_duplicate = 1;
            }
        }
        if (is_duplicate)
        count++;
        
    }

    printf("The total no. of duplicate values are: %d\n", count);
    
    return 0;
}