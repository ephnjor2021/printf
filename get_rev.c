#include "holberton.h"

/**
 * str_rev - string rev print
 * @list: list definition
 * Return: count chars
 */
int str_rev(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
		return (-1);
	return (print_rev(s));
}

/**
 * print_rev - print string in reverse
 * @s: string to reverse
 *
 * Return: character count
 */
int print_rev(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (print_rev(s + 1) + _putchar(*s));
}
