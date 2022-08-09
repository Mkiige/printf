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
	
	/* only print valid format strings */
	if (format == NULL)
		return (-1);

	va_start(ap, format);
	/* check each character in format */
	for (f_idx = 0, b_idx = 0; format[f_idx] != '\0'; f_idx++)
	{
