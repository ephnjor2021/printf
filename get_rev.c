#include "holberton.h"

/**
 * _rev - get rev
 * @args: arguments
 * Return: string
 */

char *_rev(va_list args)
{
	char *rev_s, *buffer;
	int i, j, len;

	buffer = va_arg(args, char *);
	len = _strlen(buffer);
	rev_s = malloc((len + 1) * sizeof(char));
	for (i = 0, j = len - 1; i < len; i++, j--)
		rev_s[i] = buffer[j];
	return (rev_s);
}
