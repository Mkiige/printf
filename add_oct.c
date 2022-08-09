#include "main.h"

/**
 * add_oct - adds a given integer to a given buffer as octal number
 * @ap: va_list containing the integer to add
 * @buffer: character buffer
 * @x: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_oct(va_list ap, char *buffer, int x)
{
	unsigned int num = va_arg(ap, unsigned int);
	int j = 0;
	char *num_str;
