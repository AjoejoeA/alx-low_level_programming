#include "main.h"

/**
 * get_endianness - Chk endianness
 * Return: 0 If it is big endian, or 1 if ltl  endian
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
