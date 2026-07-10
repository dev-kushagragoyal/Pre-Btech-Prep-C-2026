// 8. Write a program to calculate the factorial of a given number using a for loop.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int factorial = 1;

    for (int i = 1; i <= n; i += 1)
    {

        factorial *= i;
    }

    printf("The final answer is: %d", factorial);

    return 0;
}