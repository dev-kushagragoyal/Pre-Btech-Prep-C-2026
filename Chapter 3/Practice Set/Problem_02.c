// 2. Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.

#include <stdio.h>

int main()
{
    int subject_1, subject_2, subject_3;

    printf("Enter subject 1 makrs: ");
    scanf("%d", &subject_1);

    printf("Enter subject 2 makrs: ");
    scanf("%d", &subject_2);

    printf("Enter subject 3 makrs: ");
    scanf("%d", &subject_3);

    float percentage = ((subject_1 + subject_2 + subject_3) / 300.0) * 100;

    if (subject_1 >= 33 && subject_2 >= 33 && subject_3 >= 33 && percentage >= 40)
    {
        printf("You are passed and your overall percentage is %f percent", percentage);
    }

    else
    {
        printf("You are failed and your overall percentage is %f percent", percentage);
    }
    return 0;
}