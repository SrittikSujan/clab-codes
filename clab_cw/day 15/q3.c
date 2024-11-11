/*
A Fibonacci sequence is 
defined as follows: the first 
and second terms in the 
sequence are 0 and 1. 
Subsequent terms are found 
by adding the preceding two 
terms in the sequence (Fi = 
Fi-1 + Fi-2). WAP to find out 
the value of nth term of the 
Fibonacci sequence by 
writing a suitable user 
defined function.
*/

#include <stdio.h>

void fibo(int n)
{
    if (n <= 1) {
        printf("The Fibonacci series is: %d\n\n", 0);
        printf("And the Nth term of Fibonacci series is: %d\n\n", 0);
        return;
    } else if (n == 2) {
        printf("The Fibonacci series is: %d %d\n\n", 0, 1);
        printf("And the Nth term of Fibonacci series is: %d\n\n", 1);
        return;
    }

    int f;
    int b = 0;
    int c = 1;

    int series[n - 2];

    int i = 0;
    while (i <= n - 3)
    {
        f = b + c;
        series[i] = f;
        b = c;
        c = f;
        ++i;
    }

    printf("\n");
    printf("The Fibonacci series is:\n");
    printf("%d %d ", 0, 1);

    for (int i = 0; i <= n - 3; i++)
    {
        printf("%d ", series[i]);
    }
    printf("\n\n");
    printf("And the Nth term of Fibonacci series is: %d\n\n", series[n - 3]);
}

int main() {
    int num;

    printf("Enter the number for which you want the Fibonacci series:\n");
    scanf("%d", &num);

    fibo(num);

    return 0;
}