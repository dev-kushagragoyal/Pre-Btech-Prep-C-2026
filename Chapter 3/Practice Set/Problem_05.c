// 5. Write a program to determine whether a character entered by the user is
// lowercase or not

#include <stdio.h>

int main()
{
    char input;
    printf("Enter the character: ");
    scanf("%c", &input);

    if (input >= 'a' && 'z' >= input)
    {
        printf("The character is lower case\n");
    }
    else
    {
        printf("The character is not lower case\n");
    }
    return 0;
}