#include "holberton.h"


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
