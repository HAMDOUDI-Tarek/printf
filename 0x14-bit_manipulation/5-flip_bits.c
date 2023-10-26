#include "main.h"

/**
 * flip_bits - number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: changed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, me = 0;
	unsigned long int this;
	unsigned long int code = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		this = code >> v;
		if (this & 1)
			me++;
	}

	return (me);
}
