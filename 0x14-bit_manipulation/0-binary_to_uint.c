#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int my_code = 0;

	if (!b)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		my_code = 2 * my_code + (b[v] - '0');
	}

	return (my_code);
}
