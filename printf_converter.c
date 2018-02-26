#include "holberton.h"

/**
 * _strlen - gets string length
 * @string: string
 * Return: length (int)
 */

int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}


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

/**
 * modulo - returns modulo
 */

char *modulo(void)
{
	char *string;

	string = "%";
	return (string);
}

/**
 * _int - convert integer to a string
 * @integ:
 * Return: string representation of integer
 */

char *_int(va_list integ)
{
	int a, b, res, tmp, exp, cnt;
	char *str;

	a = va_arg(integ, int);
	cnt = a = b = 0;
	exp = 1;
	a >= 0 ? (res = a * -1) : (res = a, cnt++);
	tmp = res;
	while (tmp <= -10)
	{
		exp *= 10;
		tmp /= 10;
		cnt++;
	}
	str = malloc((cnt + 1) * sizeof(char));
	if (a < 0)
		str[b++] = '-';
	while (exp >= 1)
	{
		str[b++] = (((res / exp) % 10) * -1 + '0');
		exp /= 10;
	}
	return (str);
}

/**
 * _ui - convert ui to string
 * @unsign: arguments
 * Return: string representation
 */

char *_ui(va_list unsign)
{
	unsigned int a, res, tmp, exp, cnt;
	char *str;

	res = va_arg(unsign, unsigned int);
	cnt = a = 0;
	exp = 1;
	tmp = res;
	while (tmp >= 10)
	{
		exp *= 10;
		tmp /= 10;
		cnt++;
	}
	str = malloc((cnt + 1) * sizeof(char));
	while (exp >= 1)
	{
		str[a++] = (((res / exp) % 10) + '0');
		exp /= 10;
	}
	return (str);
}

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
