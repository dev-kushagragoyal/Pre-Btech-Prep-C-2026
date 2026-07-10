// 9. Repeat 8 using while loop.
// 8. Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int factorial = 1;
    int i = 1;

    while (i <= n)
    {
        factorial *= i;
        i += 1;
    }

    printf("The final answer is: %d", factorial);

    return 0;
}