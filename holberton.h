#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int print_c(va_list *ap);
int print_s(va_list *ap);
int print_d(va_list *ap);
int print_i(va_list *ap);
int print_b(va_list *ap);
int not_sp(unsigned int *l, char f);
int check(char f);
/**
 * struct func - print
 * @c: char
 * @f: funct
 */
typedef struct func
{
	char c;
	int (*f)(va_list *ap);
} get_f;
int _putchar(char c);
int _printf(const char *format, ...);
int magic(const char *frm, va_list *ap);
int (*get_fun(char *frm))(va_list);
#endif /* HOLBERTON_H */
