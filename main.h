#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define SIZE 1024000 /* buffer size */

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
