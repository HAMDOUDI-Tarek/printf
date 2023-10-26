#include "main.h"

/**
 * get_endianness - checks a machine size
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int my_code = 1;
	char *me = (char *) &my_code;

	return (*me);
}
