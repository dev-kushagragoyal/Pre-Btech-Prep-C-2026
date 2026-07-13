// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2


#include <stdio.h>

void calculate_force();

void calculate_force(){
    float mass;
    printf("Enter the mass in Kg: ");
    scanf("%f", &mass);

    float force = mass * 9.8;

    printf("Force on the body with mass %.2f is: %.2f Newton", mass, force);
}
int main()
{
    calculate_force();
    return 0;
}