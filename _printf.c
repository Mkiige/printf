#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string composed of zero or more directives
 *
 * Return: number of characters printed. Otherwise -1
 */
int _printf(const char *format, ...)
{
	/* use character buffer to call write as few times as possible */
	char buffer[SIZE] = {0};
	int f_idx, b_idx;
	int (*f)(va_list, char *, int);
	va_list ap;
