// 1. Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

#include <stdio.h>

int main()
{
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);

    int breadth;
    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    int area;
    area = length * breadth;
    printf("The area of rectangle is: %d", area);

    return 0;
}


