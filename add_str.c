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
/**
 * add_str_print - adds a given string to a given buffer
 * replacing unprintable characters accordingly
 * @ap: va_list containing the string to add
 * @buffer: character buffer
 * @x: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_str_print(va_list ap, char *buffer, int x)
{
	char *str = va_arg(ap, char *);
	char *hexa;
	int j, k;

	if (!str)
		return (copy_to_buff("(null)", buffer, x));

	for (j = 0, k = 0; str[j] != '\0'; j++, x++)
	{
		if (str[j] < 32 || str[j] >= 127)
		{
			/* print '\x' followed by the hex rep. of the character */
			hexa = int_to_str(str[j], 16);
			buffer[x] = '\\';
			buffer[x + 1] = 'x';
			buffer[x + 2] = hexa[1] == '\0' ? '0' : hexa[0];
			buffer[x + 3] = hexa[1] == '\0' ? hexa[0] : hexa[1];
			x += 3;
			k += 3;
		}
		else
		{
			buffer[x] = str[j];
		}
	}

	return (j + k);
}
/**
 * copy_to_buff - copies a given string to a given buffer from a given index
 * @s: string
 * @buffer: buffer to copy to
 * @x: index to to start copying to
 *
 * Return: number of characters copied
 */
int copy_to_buff(char *s, char *buffer, int x)
{
	int j;

	for (j = 0; s[j] != '\0'; j++, x++)
		buffer[x] = s[j];

	return (j);
}
