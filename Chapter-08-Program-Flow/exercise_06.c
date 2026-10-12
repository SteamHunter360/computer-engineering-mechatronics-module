
#include <stdio.h>

int main(void)
{
    // Chapter 8 Exercise 6: Colour classification using switch-case

    int number;

    // Request an integer from the user
    printf("Enter an integer between 0 and 9: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    // Select the corresponding colour using switch-case
    switch (number)
    {
        case 0:
            printf("Black\n");
            break;

        case 1:
            printf("Brown\n");
            break;

        case 2:
            printf("Red\n");
            break;

        case 3:
            printf("Orange\n");
            break;

        case 4:
            printf("Yellow\n");
            break;

        case 5:
            printf("Green\n");
            break;

        case 6:
            printf("Blue\n");
            break;

        case 7:
            printf("Violet\n");
            break;

        case 8:
            printf("Grey\n");
            break;

        case 9:
            printf("White\n");
            break;

        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
