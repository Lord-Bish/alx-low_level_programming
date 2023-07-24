#include "main.h"                                       /**
 * print_binary - prints the binary representation of a
numnber
 * @n: unsigned long, number to be represented in binary
 */                                                     

void print_binary(unsigned long int n) {
    /* Number of bits in an unsigned long int */
    int num_bits, i;
    unsigned long int mask;

    num_bits = sizeof(unsigned long int) * 8;

    /* Start from the most significant bit and print one bit at a time */
    for (i = num_bits - 1; i >= 0; i--) {
        mask = 1UL << i; /* Create a mask with the i-th bit set */
        _putchar((n & mask) ? '1' : '0'); /* Print '1' if the i-th bit is set, '0' otherwise */
    }
}
