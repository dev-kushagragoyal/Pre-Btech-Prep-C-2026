// 2. Write a function to convert Celsius temperature into Fahrenheit

#include <stdio.h>

int temperature();

int temperature(){
    float celsius;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 1.8) + 32.0;

    printf("%.2f in Fahrenheit is: %.2f", celsius, fahrenheit);
}
int main()
{
    temperature();
    return 0;
}