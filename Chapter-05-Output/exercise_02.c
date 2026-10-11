
#include <stdio.h>

int main(void)
{
    // Chapter 5 Exercise 2: Displaying different data types

    int motorCount = 4;
    char motorGrade = 'A';
    float motorSpeed = 125.5f;

    // Display values separated by a single space
    printf("%d %c %.1f\n", motorCount, motorGrade, motorSpeed);

    return 0;
}
