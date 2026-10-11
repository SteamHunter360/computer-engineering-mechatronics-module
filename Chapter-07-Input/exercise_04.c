
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Chapter 7 Exercise 4: Reading text input

    char firstName[50];
    char fullName[100];

    // Read a single word using scanf
    printf("Enter your first name: ");

    if (scanf("%49s", firstName) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Clear the remaining characters on the input line
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }

    // Read a full name using fgets
    printf("Enter your full name: ");

    if (fgets(fullName, sizeof(fullName), stdin) == NULL)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Remove the trailing newline if present
    fullName[strcspn(fullName, "\n")] = '\0';

    // Display both results
    printf("\nFirst name: %s\n", firstName);
    printf("Full name: %s\n", fullName);

    return 0;
}
