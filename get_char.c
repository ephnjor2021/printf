#include "holberton.h"

int ch(va_list character)
{
	return(_putchar(va_arg(character, int)));
}
