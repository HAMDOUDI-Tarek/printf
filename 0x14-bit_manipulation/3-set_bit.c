#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: pointer to a number
 * @index: index of the set bit
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
