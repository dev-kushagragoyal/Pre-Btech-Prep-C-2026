// 4. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    float value = 3 * x / y - z + k;
    printf("The answer 1 is: %f\n", value);
    printf("The answer 2 is: %d\n", ((3 * x) / y) - (z + k));
    return 0;
}