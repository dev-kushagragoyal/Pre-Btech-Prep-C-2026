// 10. Write a program to check whether a given number is prime or not using for loops.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int is_prime = 0;

    for (int i = 2; i < n; i += 1)
    {

        if (n % i == 0)
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