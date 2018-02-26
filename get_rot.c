#include "holberton.h"

/**
 * rot13 - convert rot13
 * @str: arguments
 * Return: rot13 converted
 */

char *rot13(va_list str)
{
	int a, size;
	char *arg;
	char *buff;
	char part_1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char part_2[] = "nopqrstuvwxyzabcdefghijklm";

	arg = va_arg(str, char *);
	size = _strlen(arg);
	buff = malloc((size + 1) * sizeof(char));
	a = 0;
	while (arg[a] != '\0')
	{
		if ((arg[a] >= 'A' && arg[a] <= 'Z') ||
		    (arg[a] >= 'a' && arg[a] <= 'z'))
		{
			buff[a] = (arg[a] - 'A' > 25) ?
				part_2[arg[a] - 'a'] : part_1[arg[a] - 'A'];
		}
		buff[a] = arg[a];
	}
	buff[a] = '\0';
	return (buff);
}
