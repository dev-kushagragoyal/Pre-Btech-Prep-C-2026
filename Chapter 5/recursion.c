#include <stdio.h>

int facorial(int);

int factorial(int x)
{
    if (x == 1 || x == 0) // Bace COndition 
    {
        return 1; // Agr ek barr function return hogya to uske niche ka function kuch nhi kar ta 
    }
    return factorial(x - 1) * x;
}
int main()
{
    int a = 6;
    printf("The factorial is: %d\n", factorial(a));
    return 0;
}