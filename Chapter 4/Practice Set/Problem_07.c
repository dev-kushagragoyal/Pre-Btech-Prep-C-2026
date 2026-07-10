// 7. Write a program to calculate the sum of the numbers occurring in the
// multiplication table of n. (consider n x 1 to n x 10).

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;
    int sum = 0;
    
    printf("The table of %d is printed below: \n", n);

    while (i <= 10)
    {   
        printf("%d X %d = %d\n", n, i, n * i);
        sum += (n * i);
        i += 1;
    }
    
    printf("\n");
    printf("The final result is: %d\n", sum);

    return 0;
}