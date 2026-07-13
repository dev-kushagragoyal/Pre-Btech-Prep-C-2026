// 7. Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 1)
    {
        for (int j = 1; j <= (2 * i) - 1; j += 1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}