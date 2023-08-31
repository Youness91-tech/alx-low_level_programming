#include "main.h"

/**
 * print_binary - Prints the binary equivalent of the decimal number
 * @n: number printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int ui_current;
	int leng, counter = 0;

	for (leng = 63; leng >= 0; leng--)
	{
		ui_current = n >> leng;

		if (ui_current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
