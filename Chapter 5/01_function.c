#include <stdio.h>

// Function prototype (Compiler ko phone kar rha hu ki function hai yaha pe)
int sum(int, int);

// Function definition (Compiler ko bata rha hu ki us function me ye karna hai)
int sum(int x, int y)
{
    printf("The sum is: %d\n", x + y);
    return x + y;
}

int main()
{
    int a = 1, b = 2;
    sum(a, b); // Function Call 

    int a2 = 11, b2 = 2;
    sum(a2, b2); // Function Call

    int a3 = 4, b3 = 5;
    sum(a3, b3); // Function Call


    return 0;
}