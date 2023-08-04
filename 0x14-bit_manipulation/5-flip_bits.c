#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Flip bits to convert one number to another number
 * @a: First num
 * @b: Second num to convert to
 * Return: numb of bits was needed to flip
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned long int diff;
	int counter;

	diff = a ^ b;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

