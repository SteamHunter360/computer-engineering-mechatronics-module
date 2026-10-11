
#include <stdio.h>

int main(void)
{
    // Chapter 6 Exercise 2: Bitwise operations

    unsigned int A = 60;
    unsigned int B = 13;
    unsigned int R;

    // Bitwise AND
    R = A & B;
    printf("AND: %u\n", R);

    // Bitwise OR
    R = A | B;
    printf("OR: %u\n", R);

    // Bitwise XOR
    R = A ^ B;
    printf("XOR: %u\n", R);

    // Bitwise NOT
    R = ~A;
    printf("NOT A: %u\n", R);

    // Left shift by 2 bits
    R = A << 2;
    printf("Left Shift: %u\n", R);

    // Right shift by 2 bits
    R = A >> 2;
    printf("Right Shift: %u\n", R);

    return 0;
}
