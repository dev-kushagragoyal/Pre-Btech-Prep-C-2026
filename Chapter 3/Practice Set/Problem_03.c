// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.


#include <stdio.h>

int main()
{
    float income;
    printf("Enter your income in numbers: ");
    scanf("%f", &income);

    if (income > 1000000)
    {
        float tax = (income * 30.0) / 100;
        printf("The tax on your income is: %f", tax);
    }
    else if (1000000 >= income && income > 500000)
    {
        float tax = (income * 20.0) / 100;
        printf("The tax on your income is: %f", tax);
    }
    else if (500000 >= income && income >= 250000)
    {
        float tax = (income * 5.0) / 100;
        printf("The tax on your income is: %f", tax);
    }
    else
    {
        printf("Your Income is below the tax criteria");
    }
    return 0;
}