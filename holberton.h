#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct fmt - function to check for formats
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct fmt
{
	char *type;
	int (*f)();
} fmt_t;

int _printf(const char *format, ...);
int print_op(const char *format, fmt_t *print_arr, va_list args);
int ch(va_list character);
int str(va_list string);
int hex_str(va_list hex_string);
int _int(va_list integ);
int binary(va_list bin);
int _ui(va_list unsign);
int hex(va_list args);
int hex_cap(va_list args);
int print_oct(va_list args);
int print_rot13(va_list arguments);
int print_str_rev(va_list arguments);
int print_rev(char *s);
int convert(unsigned int num, unsigned int base);
int convert2(unsigned int num, unsigned int base, char ten);
int _strlen(char *s);
int _putchar(char c);

#endif
