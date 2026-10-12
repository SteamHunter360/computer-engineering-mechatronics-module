
#include <stdio.h>

int main(void)
{
    // Chapter 8 Exercise 3: Using if and else

    int number;

    // Request an integer from the user
    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Check whether the integer is in range
    if (number >= 0 && number <= 10)
    {
        printf("The number is in range\n");
    }
    else
    {
        printf("The number is not in range\n");
    }

    return 0;
}
