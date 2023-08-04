#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Set value of the bit to 0 given index
 * @n: Point to decimal num to change
 * @index: index posit to change
 * Return: 1 if it work, -1 if err
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (b = 1; hold > 0; b *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= b;

	return (1);
}
