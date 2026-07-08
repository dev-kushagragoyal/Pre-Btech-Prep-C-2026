// 3. Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).

#include <stdio.h>

int main()
{
    float celsius;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);

    float fah;
    fah = (celsius * 1.8) + 32;

    printf("Fahrenheit temperature is: %f", fah);
    
    return 0;
}