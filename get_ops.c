#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

char *(*get_ops(char omar))(va_list)
{
	int a;
	fmt_t ops[] = {
		{"c", *ch},
		{"s", str},
		{"%", modulo},
		{"d", _int},
		{"i", _int},
		{"u", _ui},
		/*{"o", _octal},*/
		{"r", _rev},
		{"R", rot13},
		{NULL, NULL}
	};

	for (a = 0; ops[a].type; a++)
	{

		if (omar == *ops[a].type)
			return (*ops[a].f);
	}

	return (NULL);
}
