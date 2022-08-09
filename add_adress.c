#include "main.h"

/**
 * add_address - adds a given integer to a given buffer
 * as a large hexadecimal number in lowercase appended with 0x
 * @ap: va_list containing the integer to add
 * @buffer: character buffer
 * @x: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_address(va_list ap, char *buffer, int x)
{
  unsigned long int num = va_arg(ap, unsigned long int);
	int j, k = 0;
	char *num_str;

	if (!num)
		return (copy_to_buff("(nil)", buffer, x));

	num_str = int_to_str(num, 16);
	if (!num_str)
		return (0);
	
	buffer[x] = '0';
	buffer[x + 1] = 'x';
	x += 2;
	k += 2;
	
