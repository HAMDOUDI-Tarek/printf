#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int my_code;

	if (index > 63)
		return (-1);

	my_code = (n >> index) & 1;

	return (my_code);
}
