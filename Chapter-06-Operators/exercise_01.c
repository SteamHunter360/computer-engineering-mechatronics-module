
#include <stdio.h>

int main(void)
{
    // Chapter 6 Exercise 1: Increment and decrement operators

    int number = 5;

    printf("Initial value: %d\n", number);

    number++;
    printf("After number++: %d\n", number);

    ++number;
    printf("After ++number: %d\n", number);

    number--;
    printf("After number--: %d\n", number);

    --number;
    printf("After --number: %d\n", number);

    return 0;
}
