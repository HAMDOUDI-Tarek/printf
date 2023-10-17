#include "main.h"
#include <stdarg.h>

/**
 * print_HEX - converts to HEXADECIMAL.
 * @val: value to be converted .
 * Return: cont.
 */

int print_HEX(va_list val)
{
	int i, cont = 0;
	int *arr;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (temp / 16 != 0)
	{
		temp = temp / 16;
		cont++;
	}
	cont++;
	arr = malloc(sizeof(int) * cont);

	if (arr == NULL)
		return (0);
	for (i = 0; i < cont; i++)
	{
		arr[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = cont - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cont);
}
