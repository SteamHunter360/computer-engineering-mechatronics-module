
#include <stdio.h>

int main(void)
{
    // Chapter 8 Exercise 5: Colour classification

    int number;

    // Request an integer from the user
    printf("Enter an integer between 0 and 9: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    // Select the corresponding colour
    if (number == 0)
    {
        printf("Black\n");
    }
    else if (number == 1)
    {
        printf("Brown\n");
    }
    else if (number == 2)
    {
        printf("Red\n");
    }
    else if (number == 3)
    {
        printf("Orange\n");
    }
    else if (number == 4)
    {
        printf("Yellow\n");
    }
    else if (number == 5)
    {
        printf("Green\n");
    }
    else if (number == 6)
    {
        printf("Blue\n");
    }
    else if (number == 7)
    {
        printf("Violet\n");
    }
    else if (number == 8)
    {
        printf("Grey\n");
    }
    else if (number == 9)
    {
        printf("White\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
