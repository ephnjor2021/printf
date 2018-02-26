#include "holberton.h"

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	int j, i;

	va_list args;
	fmt c_ops[] = {
		{'c', ch},
		{'s', str},
		{'%', modulo},
		{'d', _int},
		{'i', _int},
		{'u', _ui},
		{'r', rev_str},
		{'R', rot13},
		{'\0', NULL}
	};

	va_start(args, format);
	for (j = 0; format[j] != '\0'; j++)
	{
		while (format[j] != '%')
		{
			write(1, &format[j], 1);
			j++;
		}
		j++;
		while (c_ops[i].type != '\0')
		{
			if (c_ops[i].type == format[j])
			{
				c_ops.[i].f(args);
			}
			i++;
		}
	}
	va_end(args);
	return (0);
}
