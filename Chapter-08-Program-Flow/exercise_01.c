
#include <stdio.h>

int main(void)
{
    // Chapter 8 Exercise 1: Conditional statements

    int a;
    int b;

    // Request values from the user
    printf("Enter value for a: ");

    if (scanf("%d", &a) != 1)
    {
        printf("Invalid input for a.\n");
        return 1;
    }

    printf("Enter value for b: ");

    if (scanf("%d", &b) != 1)
    {
        printf("Invalid input for b.\n");
        return 1;
    }

    // Compare a and b
    if (a > b)
    {
        printf("a is greater than b\n");
    }

    if (a < b)
    {
        printf("a is less than b\n");
    }

    if (a == b)
    {
        printf("a is equal to b\n");
    }

    if (a != b)
    {
        printf("a is not equal to b\n");
    }

    return 0;
}
