#include "holberton.h"

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


/**
 * _memcpy - copies specified memory
 * @dest: destination memory pointer
 * @src: source memory pointer
 * @n: number of byte need to be copied
 * @buffer: bytes taken in the buffer
 * Return: pt to dest area
 */

char *_memcpy(char *dest, char *src, unsigned int n, unsigned int buffer)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i + buffer] = src[i];
	return (dest);
}

/**
 * memalloc - allocates to buffer
 * @buff: string pushed to buffer
 * @buffer_2: buffer array
 * @len1: pointer to end
 * @len2: total length
 * @total: total count pointer
 * Return: length of buffer
 */

int memalloc(char *buff, int len2, char *buffer_2, int len1, double *total)
{
	int sizecpy = 0;

	if (len1 + len2 > BUFFER_SIZE)
	{
		sizecpy = BUFFER_SIZE - len1;
		_memcpy(buffer_2, buff, sizecpy, len1);
		_putchar(buffer_2, BUFFER_SIZE);
		buff = buff + sizecpy;
		_memcpy(buffer_2, buff, len2 - sizecpy, 0);
		len1 = len2 - sizecpy;
		*total += BUFFER_SIZE;
	}
	else
	{
		_memcpy(buffer_2, buff, len2, len1);
		len1 = len1 + len2;
	}

	return (len1);
}
