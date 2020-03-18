#include "holberton.h"
/**
 * print_i? (- print c)?
 *
 * @ap: input format
 * Return: c
 */
int print_i(va_list *ap)
{
	int k, i, j, x, z, c = 0;
	unsigned int n;

	k = va_arg(ap, int);
	if (k < 0)
	{
		c++;
		_putchar('-');
		k *= -1;

	}
	n = (unsigned int)k;
	if (n >= 10)
	{
		for (i = 1000000000; i >= 10; i = i / 10)
		{
			x = n / i;
			if (x > 0)
			{
				_putchar (x + '0');
				c++;
				j = i;
				while (j >= 10)
				{
					z = ((n % j) / (j / 10));
					_putchar (z + '0');
					c++;
					j = j / 10;
				}
				break;
			}
		}
	}
	else
	{
		_putchar (n + '0');
		c++;
	}
	return (c);
}


/**
 * print_d? (- print s)?
 *
 * @ap: input format
 * Return: c
 */
int print_d(va_list *ap)
{

	char *str = va_arg(ap, char *);
	int i = 0, c = 0;

	if (str == NULL)
		return (-1);
	while (str[i])
	{
		_putchar (str[i]);
		c++;
		i++;
	}
	return (c);
}
/**
 * print_b? (- print b)?
 *
 * @ap: input format
 * Return: c
 */
int print_b(va_list *ap)
{

	int n = va_arg(ap, unsigned int), i = 0, c = 0;
	int s[64];

	while (n > 0)
	{
		s[i] = n % 2;
		n /= 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar (s[i] + '0');
		c++;
		i--;
	}
	return (c);
}
