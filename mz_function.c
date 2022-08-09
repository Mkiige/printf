#include "main.h"

/**
 * get_sp_func - selects the correct function using a given character
 * @c: specifier character passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to c. Otherwise NULL
 */
int (*get_sp_func(char c))(va_list, char *, int)
{
	sp_t sps[] = {
		{'c', add_char},
		{'s', add_str},
  };
