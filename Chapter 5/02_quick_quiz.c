// Quick Quiz: Write a program with three functions
// 1. Good morning function which prints “good morning”.
// 2. Good afternoon function which prints “good afternoon”.
// 3. Good night function which prints “good night”.
// main() should call all of these in order 1→2→3

#include <stdio.h>

void good_morning(); // Function Protoype
void good_afternoon(); // Function Protoype
void good_night(); // Function Protoype

void good_morning(){ // Function Definition
    printf("good morning\n");
}
void good_afternoon(){ // Function Definition
    printf("good afternoon\n");
}
void good_night(){ // Function Definition
    printf("good night\n");
}

int main()
{
     good_morning();// Function Call
     good_afternoon();// Function Call
     good_night();// Function Call

    return 0;
}