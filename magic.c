#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * magic - magic is done.
 *
 * @frm: input format
 * @ap: input format
 * Return: int
 */
int magic(const char *frm, va_list *ap)
{
	get_f get[] = {
		{'c', print_c},	{'i', print_i},	{'d', print_i},	{'s', print_s},
		{'b', print_b},
	};
	unsigned int len = 0, j, i = 0, z = 0, x;

	while (frm[i] && frm)
	{
		len++;
		if (frm[i] == '%' && frm[i + 1] == '\0')
			return (-1);
		if (frm[i] == '%')
		{
			i++;
			x = check(frm[i]);
			if (x == 1)
			{
				len--;
				j = 0;
				while (j < 5)
				{
					if (get[j].c == frm[i])
					{
						z++;
						frm += z;
						len = len + get[j].f(ap);
						frm -= z;
					}
					j++;
				}
			}
			else if (x == 0)
				len = not_sp(&len, frm[i]);
		}
		else
			_putchar(frm[i]);
		i++;
	}
	return (len);
}
