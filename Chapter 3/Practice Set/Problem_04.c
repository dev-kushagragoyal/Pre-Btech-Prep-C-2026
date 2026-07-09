// 4. Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.

#include <stdio.h>

int main()
{
    int leap;
    printf("Enter the year: ");
    scanf("%d", &leap);

    if (leap % 100 == 0 && leap % 400 == 0)
    {
        printf("The year is leap\n");
    }
    else if (leap % 100 != 0 && leap % 4 == 0)
    {
        printf("The year is leap\n");
    }
    else
    {
        printf("The year is not leap\n");
    }
    return 0;
}