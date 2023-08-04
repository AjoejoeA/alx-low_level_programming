#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert the binary number to the Unsigned int
 * @a: Charater String
 * Return: The convert decimal number or 0 if there is an unconvertable charater
 */
unsigned int binary_to_uint(const char *a)
{
	unsigned int total, power;
	int len;

	if (a == NULL)
		return (0);

	for (len = 0; a[len]; len++)
	{
		if (a[len] != '0' && a[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (a[len] == '1')
			total += power;
	}

	return (total);
}
