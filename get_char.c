#include "holberton.h"

/**
 * ch - get char from arguments
 * @c: arguments
 * Return: char
 */

char *ch(va_list c)
{
	char string[2];
	char *p;

	p = string;
	string[0] = va_arg(c, int);
	string[1] = '\0';
	return (p);
}
