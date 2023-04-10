#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*binary_to_unit- it converts a binary number to an unsigned integer
 * Return-gives the value of the converted integer and zero if the char is uncovertable
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val,convert;
	int uzi;

	if (b == NULL)
		return (0);

	for (uzi = 0; b[uzi]; uzi++)
	{
		if (b[uzi] != '0' && b[uzi] != '1')
			return (0);
	}

	for (convert = 1, val = 0, uzi--; uzi >= 0; uzi--, convert *= 2)
	{
		if (b[uzi] == '1')
			val += convert;
	}

	return (val);
}


