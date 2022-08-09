#include "main.h"

/**
 * add_oct - adds a given integer to a given buffer as octal number
 * @ap: va_list containing the integer to add
 * @buffer: character buffer
 * @i: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_oct(va_list ap, char *buffer, int i)
