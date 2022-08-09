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
	int m, z;
	int (*f)(va_list, char *, int);
	va_list ap;

	/* print valid formatt strings */
	if (format == NULL)
		return (-1);

	va_start(ap, format);
	/* check character in format */
	for (m = 0, z = 0; format[m] != '\0'; m++)
	{
		/* if current character is % check next character */
		if (format[m] == '%')
		{
			if (format[m + 1] == '\0')
				return (-1);
			/* get correct print function */
			f = mz_func(format[++m]);
			if (f)
				z += f(ap, buffer, z);
			else
			{
				buffer[z++] = '%';
				buffer[z++] = format[m];
			}
		}
		else
			buffer[z++] = format[m];
	}
	va_end(ap);
	write(1, buffer, z);
	return (z);
}
