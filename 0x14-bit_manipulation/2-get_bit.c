#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit to extract, starting from 0
 *
 * Return: the value of the bit at index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int value)
{
        if (value >= sizeof(unsigned long int) * 8)
                return (-1);

        return ((n >> value) & 1);
}
