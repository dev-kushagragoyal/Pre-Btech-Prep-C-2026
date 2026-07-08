// 2. Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.

#include <stdio.h>

int main()
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    float area = 3.14 * radius * radius;

    printf("The area of the circle is: %f\n", area);

    int height = 5;
    float volume = 3.14 * radius * radius * height;

    printf("The volume of cylinder is: %f\n", volume);

    return 0;
}