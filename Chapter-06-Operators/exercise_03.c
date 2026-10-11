
#include <stdio.h>

int main(void)
{
    // Chapter 6 Exercise 3: Hexadecimal bitwise operations

    unsigned int A = 0x3C;
    unsigned int B = 0x0D;
    unsigned int R;

    // Bitwise AND
    R = A & B;
    printf("AND: 0x%02X\n", R);

    // Bitwise OR
    R = A | B;
    printf("OR: 0x%02X\n", R);

    // Bitwise XOR
    R = A ^ B;
    printf("XOR: 0x%02X\n", R);

    // Bitwise NOT
    R = ~A;
    printf("NOT A: 0x%08X\n", R);

    // Left shift by 2 bits
    R = A << 2;
    printf("Left Shift: 0x%02X\n", R);

    // Right shift by 2 bits
    R = A >> 2;
    printf("Right Shift: 0x%02X\n", R);

    return 0;
}
