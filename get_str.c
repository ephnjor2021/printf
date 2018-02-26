#include "holberton.h"

/**
 * str - get string from arguments
 * @s: arguments
 * Return: string
 */

char *str(va_list *s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		return ("(null)");
	return (string);
}
