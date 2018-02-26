#include <unistd.h>

/**
 * _putchar - writes the string to stdout
 * @buffer: buffer
 * @size: size of buffer
 * Return: void
 */

void _putchar(char *buffer, int size)
{
	write(1, buffer, size);
}
