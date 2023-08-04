#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Flip bits to convertS one numb to another numb
 * @a: First numb
 * @b: Second numb to convert to
 * Return: Num of bits was needed to flip
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned long int diff;
	int counter;

	diff =a ^ b;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

