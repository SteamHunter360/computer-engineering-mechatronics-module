
#include <stdio.h>

int main(void)
{
    // Chapter 7 Exercise 1: Reading numerical input

    int motorCount;

    // Ask the user to enter a value
    printf("Enter the number of motors: ");

    // Read the value entered by the user
    if (scanf("%d", &motorCount) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Display the entered value
    printf("Number of motors entered: %d\n", motorCount);

    return 0;
}
