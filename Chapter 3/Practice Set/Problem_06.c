// 6. Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Enter number 3: ");
    scanf("%d", &c);

    printf("Enter number 4: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is greatest", a);
    }
    if (b > c && b > a && b > d)
    {
        printf("%d is greatest", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("%d is greatest", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("%d is greatest", d);
    }
    return 0;
}