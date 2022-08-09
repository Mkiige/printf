#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string composed of zero or more directives
 *
 * Return: number of characters printed. Otherwise -1
 */
int _printf(const char *format, ...)
{
  /* buffer minimizes time to call write function */
	char buffer[SIZE] = {0};
	int f_idx, b_idx;
	int (*f)(va_list, char *, int);
	va_list ap;

	/* print valid format strings */
	if (format == NULL)
		return (-1);

