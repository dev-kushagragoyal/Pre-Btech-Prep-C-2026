// 1. Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;
    while(i <= 10){
        printf("%d X %d = %d\n", n, i, n * i);
        i += 1;
    }
    return 0;
}