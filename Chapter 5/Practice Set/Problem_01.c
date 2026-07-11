// 1. Write a program using function to find average of three numbers.

#include <stdio.h>

float average(int, int, int);

float average(int x, int y, int z)
{
    float answer = (x + y + z) / 3.0; // Yahape 3.0 ki jagaha 3 isliye nhi 
                                      // liya kyuki agar in or int me divison karyenge
                                      // to answer float nhi int hi ayega.
                                      // Isliye hamne division int aur float me karaya.
    printf("The average of %d, %d and %d is: %f", x, y, z, answer);
}
int main()
{
    int a = 1, b = 23, c = 2;
    average(a, b, c);

    return 0;
}