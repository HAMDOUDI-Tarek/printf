#include "main.h"

/**
 * print_binary - prints a binary
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	int v, acode = 0;
	unsigned long int mine;

	for (v = 63; v >= 0; v--)
	{
		mine = n >> v;

		if (mine & 1)
		{
			_putchar('1');
			acode++;
		}
		else if (acode)
			_putchar('0');
	}
	if (!acode)
		_putchar('0');
}
