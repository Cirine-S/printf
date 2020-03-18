#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	char *z;

	z = &c;
	return (write(1, z, 1));
}
