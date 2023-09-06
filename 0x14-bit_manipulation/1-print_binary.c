#include "main.h"

/**
 * print_binary - convt the Deci fmt Numbinto binary
 * @a: decimal number
 */
void print_binary(unsigned long int a)
{
	int temp;
	static int count;

	if ( a== 0 && count > 0)
		return;
	else if (a == 0)
	{
		_putchar('0');
		return;
	}

	temp = (a & 1);
	count++;
	print_binary(a >>= 1);
	_putchar('0' + temp);
}
