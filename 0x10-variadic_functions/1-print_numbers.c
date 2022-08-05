#include "variadic_functions.h"
#include <stdio.h>
#include <stdargs.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_ numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		
		if (i != (n) && i != NULL)
			printf ("%s", separator);
	}

	printf("\n");

	va_end(args);
}
