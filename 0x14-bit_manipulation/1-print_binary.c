#include "main.h"
#include <stdio.h>

/* print_binary - prints the binary representation of a number */

void print_binary(unsigned long int n)
{
	unsigned long int printval;
	int converted;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (printval = n, converted= 0; (printval >>= 1) > 0; converted++)
		;

	for (; converted >= 0; converted--)
	{
		if ((n >> converted) & 1)
			printf("1");
		else
			printf("0");
	}
}
