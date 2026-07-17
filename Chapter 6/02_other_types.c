#include <stdio.h>

int main()
{

    float l = 3.2;
    float* l1 = &l;
    char i = 'A';
    char* j = &i; // j is a integer pointer storing address of i
    int k = 69;
    printf("The address of i is %p\n", i);
    // printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", k);
    printf("The address of l is %p\n", l1);

    printf("The value at address j is %d\n", *(&i));
    return 0;
} 