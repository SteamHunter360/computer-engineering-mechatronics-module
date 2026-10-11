
#include <stdio.h>

int main(void)
{
    // Chapter 5 Exercise 3: Display values on separate lines

    int motorCount = 4;
    char motorGrade = 'A';
    float motorSpeed = 125.5f;

    // Display each variable on a new line
    printf("%d\n%c\n%.1f\n", motorCount, motorGrade, motorSpeed);

    return 0;
}
