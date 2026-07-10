// 5. Write a program to sum first n natural numbers using while loop.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }

    printf("The final result is: %d", sum);

    return 0;
}