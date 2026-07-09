#include <stdio.h>

int main()
{
    int a = 7;
    int b = 6;
    int c = a + b;

    printf("The value of a is %d and value of b is %d and sum is: %d\n",a, b, c);

    // For Reminder
    printf("The remainder when a is divided by b is: %d\n", a % b);

    // This will not work in c
    // int d = a^b *****Wrong*****

    return 0;
}