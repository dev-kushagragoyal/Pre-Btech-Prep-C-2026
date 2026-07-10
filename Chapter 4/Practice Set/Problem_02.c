// 2. Write a program to print multiplication table of n in reversed order.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 10;
    while (i >= 1){

        printf("%d X %d = %d\n", n, i, n * i);
        i -= 1;
    }
    return 0;
}