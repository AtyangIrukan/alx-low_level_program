#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int tobeclear)
{
	unsigned long int nn;
	unsigned int val;

	if (tobeclear > 64)
		return (-1);
	val = tobeclear;
	for (nn = 1; val > 0; nn *= 2, val--)
		;

	if ((*n >> tobeclear) & 1)
		*n -= nn;

	return (1);
}
