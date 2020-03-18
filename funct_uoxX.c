#include "holberton.h"

/**
 * print_u? (- print u)?
 *
 * @ap: input format
 * Return: c
 */
int print_u(va_list *ap)
{

	char *str = va_arg(ap, char *);
	int i = 0;

	if (str == NULL || str[0] == "-")
		return (-1);

	while (str[i])
	{
		_putchar (str[i]);
		i++;
	}
	return (i);
}

