#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i += 1){
        
        if (i == 5){
            // printf("Loop is exited");
            // break; // Exit this loop now!
            // continue; // Exit this iteration now
        }
        printf("i is %d\n", i);
    }
    return 0;
}