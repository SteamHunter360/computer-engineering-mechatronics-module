
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Chapter 7 Exercise 5: Reading a name and age

    char name[100];
    int age;

    // Request the user's name
    printf("Enter your full name: ");

    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        printf("Invalid name input.\n");
        return 1;
    }

    // Remove the newline character
    name[strcspn(name, "\n")] = '\0';

    // Request the user's age
    printf("Enter your age: ");

    if (scanf("%d", &age) != 1)
    {
        printf("Invalid age input.\n");
        return 1;
    }

    // Display both values using ONE printf statement
    printf("\nName: %s\nAge: %d\n", name, age);

    return 0;
}
