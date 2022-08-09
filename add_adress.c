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
