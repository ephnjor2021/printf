#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: string to reverse
 *
 * Return: character count
 */
int print_rev(char *s)
{
	if (*s == '\0')
		return (0);
	return (print_rev(s + 1) + _putchar(*s));
}
