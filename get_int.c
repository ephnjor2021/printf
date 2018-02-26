/**
 * _int - convert integer to a string
 * @integ: integer
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
