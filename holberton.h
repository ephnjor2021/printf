#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct fmt - a structure containing a char to compare
 * @type: the char we want to compare to
 * @f: the address of the function
 */
typedef struct fmt
{
	char *type;
	int (*f)();
} fmt;
int _printf(const char *format, ...);
int _putchar(char c);
#endif
