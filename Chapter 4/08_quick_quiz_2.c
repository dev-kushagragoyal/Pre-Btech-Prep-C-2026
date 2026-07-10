// Quick Quiz: Write a program to print first ‘n’
//  natural number using do-while loop.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int i = 1;

    do
    {
        printf("%d\n", i);
        i += 1;
        
    } while (i <= n);

    return 0;
}