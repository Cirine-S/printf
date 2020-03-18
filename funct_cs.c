#include "holberton.h"
/**
 * print_c? (- print int)?
 *
 * @ap: input format
 * Return: c
 */
int print_c(va_list *ap)
{
	int c = 0;

	_putchar(va_arg(ap, int));
	c++;
	return (c);
}
/**
 * print_s? (- print s)?
 *
 * @ap: input format
 * Return: c
 */
int print_s(va_list *ap)
{
	char *str = va_arg(ap, char *);
	int i = 0, c = 0;

	if (str == NULL)
		str = ("(null)");
	while (str[i])
	{
		_putchar (str[i]);
		c++;
		i++;
	}
	return (c);
}
/**
 * not_sp? (- not specifier)?
 *
 * @f: output char
 * @l: intput length
 * Return: l
 */
int not_sp(unsigned int *l, char f)
{

	if (f != '%')
	{
		*l += 1;
		_putchar('%');
	}
	_putchar(f);
	return (*l);
}
/**
 * check? (- not specifier)?
 *
 * @f: input char
 * Return: l
 */
int check(char f)
{
	int i;
	char z[] = "csdib";

	for (i = 0; z[i]; i++)
	{
		if (z[i] == f)
			return (1);
	}
	return (0);
}
