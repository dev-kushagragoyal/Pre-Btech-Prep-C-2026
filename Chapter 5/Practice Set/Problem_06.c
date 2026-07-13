// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int calculate(int);

int calculate(int x)
{
    if (x == 1)
    {
        return 1;
    }

    return (x) + calculate(x - 1);
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The sum of %d natural numebrs is: %d", n, calculate(n));

    return 0;
}