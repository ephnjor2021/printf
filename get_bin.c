#include "holberton.h"

/**
 * _bin - function to print binary
 * @bin: list being passed
 * Return: updated count return
 */
int _bin(va_list bin)
{
	unsigned int num;
	int quotient, remainder, dividend, base, i, size, count;
	char arr[32];

	size = 32;
	count = 0;
	base = 2;
	num = va_arg(bin, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	dividend = num;
	quotient = num;
	i = size - 1;

	for (i = 0; i < size; i++)
	{
		arr[i] = '0';
	}

	while (quotient > 0)
	{
		remainder = dividend % base;
		quotient = dividend / base;
		dividend = quotient;
		arr[i] = remainder + '0';
		i--;
		count++;
	}

	for (i = size - count; i < size + 1; i++)
	{
		_putchar(arr[i]);
	}
	return (count);
}
