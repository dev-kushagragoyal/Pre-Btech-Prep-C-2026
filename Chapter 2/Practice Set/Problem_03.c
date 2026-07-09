// 3. Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number to check: ");
    scanf("%d", &number);
    float answer = number % 97;
    printf("The answer is: %f\n", answer);
    printf("If the answer comes out to be 0 then the number divsible by 97");
    return 0;
}