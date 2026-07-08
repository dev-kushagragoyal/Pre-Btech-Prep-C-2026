// 4. Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

#include <stdio.h>

int main()
{
    float principal;
    printf("Enter the principle amount: ");
    scanf("%f", &principal);

    float year;
    printf("Enter the numnber of years: ");
    scanf("%f", &year);

    float rate;
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    float simple_interest = (principal * year * rate) / 100;
    printf("Simple interest is: %f", simple_interest);

    return 0;
}