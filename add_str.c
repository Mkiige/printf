#include "main.h"

/**
 * add_str - adds a given string to a given buffer
 * @ap: va_list containing the string to add
 * @buffer: character buffer
 * @x: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_str(va_list ap, char *buffer, int x)
{
	char *str = va_arg(ap, char *);

	if (!str)
		return (copy_to_buff("(null)", buffer, x));
	else
		return (copy_to_buff(str, buffer, x));
}
