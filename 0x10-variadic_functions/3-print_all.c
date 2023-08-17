#include "variadic_functions.h"

/**
 * print_char - ...
 * @args: ...
 *
 * Return: ...
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - ...
 * @args: ...
 *
 * Return: ...
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - ...
 * @args: ...
 *
 * Return: ...
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - ...
 * @args: ...
 *
 * Return: ...
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - ...
 * @format: ...
 *
 * Return: ...
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0, j;

	formatter f_list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j <= 3)
		{
			if (format[i] == f_list[j].c)
			{
				printf("%s", sep);
				f_list[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
