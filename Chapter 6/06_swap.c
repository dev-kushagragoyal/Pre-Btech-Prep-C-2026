#include <stdio.h>

void swap_karo(int*, int*);

void swap_karo(int* a, int* b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 1, b = 2;
    swap_karo(&a, &b);
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;
}