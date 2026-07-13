// 4. Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>

int fibonacci(int);

int fibonacci(int x)
{
    if (x == 1 || x == 2)
    {
        return (x - 1);
    }

    return fibonacci(x - 1) + fibonacci(x - 2);
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth element of fibonacci series is: %d", n, fibonacci(n));
    fibonacci(n);

    return 0;
}