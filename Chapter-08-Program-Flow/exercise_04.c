
#include <stdio.h>

int main(void)
{
    // Chapter 8 Exercise 4: Age classification

    int age;

    // Request the user's age
    printf("Enter your age: ");

    if (scanf("%d", &age) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Classify the age using conditional statements
    if (age <= 5)
    {
        printf("Still a baby\n");
    }
    else if (age <= 12)
    {
        printf("The junior years\n");
    }
    else if (age < 20)
    {
        printf("Teenage Years\n");
    }
    else
    {
        printf("Downhill all the way now!\n");
    }

    return 0;
}
