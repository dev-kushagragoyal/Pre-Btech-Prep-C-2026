// 5. What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

// My Answer == (4, 5, 5) # It is correct depends on the compiler evaluation order
// Code With Harry Answer == (6, 6, 4) # It is correct depends on the compiler evaluation order

#include <stdio.h>

int main()
{
    int a = 4;
    // printf("%d\n", a);
    // printf("%d\n", ++a);
    // printf("%d\n", a++);
    printf("%d %d %d \n", a, ++a, a++); // Evaluation order is Right to left
                                        // By default if not defined

    return 0;
}