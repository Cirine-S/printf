#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - magic is done.
 *
 * @frm: input format
 * Return: int
 */

int _printf(const char *frm, ...)
{
	unsigned int len = 0;
	va_list ap;

	if (!frm)
		return (-1);
	va_start(ap, frm);
	len = magic(frm, &ap);
	va_end(ap);
	return (len);
}
