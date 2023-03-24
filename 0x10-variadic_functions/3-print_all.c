#include "variadic_functions.h"

typedef struct format
{
	char op;
	void (*f)(va_list all);
} f;

/**
 * op_c - ...
 * @form: ...
 */
void op_c(va_list form)
{
	printf("%c", va_arg(form, int));
}
/**
 * op_i - ...
 * @form: ...
 */
void op_i(va_list form)
{
	printf("%d", va_arg(form, int));
}
/**
 * op_f - ...
 * @form: ...
 */
void op_f(va_list form)
{
	printf("%f", va_arg(form, double));
}
/**
 * op_s - ...
 * @form: ...
 */
void op_s(va_list form)
{
	char *str;

	str = va_arg(form, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints Anything
 *
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list ptr;

	f ops[] = {
		{'c', op_c},
		{'i', op_i},
		{'f', op_f},
		{'s', op_s}
	};

	va_start(ptr, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op == (char) format[i])
			{
				ops[j].f(ptr);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ptr);
}
