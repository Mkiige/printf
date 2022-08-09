#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct sp - Struct sp
 *
 * @sp: The specifier
 * @f: The function associated
 */
typedef struct sp
{
	char sp;
	int (*f)(va_list, char *, int);
} sp_t;
int _printf(const char *format, ...);
int (*mz_func(char c))(va_list, char *, int);
#endif
