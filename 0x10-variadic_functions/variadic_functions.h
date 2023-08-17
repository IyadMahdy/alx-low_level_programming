#ifndef VA_H
#define VA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct format_getter
{
	char c;
	void (*f)(va_list);
} formatter;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
