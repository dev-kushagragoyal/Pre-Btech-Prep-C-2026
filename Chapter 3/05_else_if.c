#include <stdio.h>

int main()
{
    int age = 18;

    if (age > 18)
    {
        printf("You can drive\n");
    }

    else if (age == 18)
    {
        printf("Make Driving lisence first\n");
    }

    else
    {
        printf("You Cannot drive\n");
    }
  
    return 0;
}