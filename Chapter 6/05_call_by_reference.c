#include <stdio.h>

int sum(int*, int*);

int sum(int* a, int* b)
{
    *a = 6;
    *b = 1;
    return *a + *b;
}
int main()
{
    int x = 1, y = 3;
    printf("The sum of 1 and 3 is: %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    return 0;
}