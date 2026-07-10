// 10. Write a program to check whether a given number is prime or not using while loops.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 2;
    int is_prime = 0;

    while (i < n)
    {
        int divide = n % i;
        i += 1;

        if (divide == 0.0)
        {
            printf("The number is not prime\n");
            is_prime = 1;
            break;
        }
    }
    if (is_prime == 0)
    {
        printf("The number is prime\n");
    }
    return 0;
}