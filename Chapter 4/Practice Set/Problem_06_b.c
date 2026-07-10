// 6. Write a program to implement program 5 using ‘do-while’ loop.
// 5. Write a program to sum first n natural numbers.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 0;
    do
    {
        sum = sum + i;
        i = i + 1;

    } while (i <= n);

    printf("The final result is: %d", sum);

    return 0;
}