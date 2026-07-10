// 6. Write a program to implement program 5 using ‘for’ loop.
// 5. Write a program to sum first n natural numbers.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i = i + 1)
    {

        sum = sum + i;
    }
    
    printf("The final result is: %d", sum);

    return 0;
}