#include "holberton.h"

int ch(va_list character)
{
	char c;

	c = va_arg(character, int);
	_putchar(c);
	return (1);
}
