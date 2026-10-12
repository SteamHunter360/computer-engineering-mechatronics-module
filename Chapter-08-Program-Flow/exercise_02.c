
#include <stdio.h>

int main(void)
{
    // Chapter 8 Exercise 2: Checking an integer range

    int number;

    // Request an integer from the user
    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Check whether the number is between 0 and 10 inclusive
    if (number >= 0 && number <= 10)
    {
        printf("The number is in range\n");
    }

    return 0;
}
