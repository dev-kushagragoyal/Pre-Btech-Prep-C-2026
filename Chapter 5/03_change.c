#include <stdio.h>

int sum();
int change(int a);

int sum(int x, int y)
{
    // printf("The sum ot the number is %d", x + y);
    return x + y;
}

int change(int a)
{
    a = 77;
    return 0;
}

int main()
{

    int b = 22;
    change(b);            
    printf("b is %d\n", b);

    int c = sum(1, 2);
    printf("%d\n", c);
    return 0;
}