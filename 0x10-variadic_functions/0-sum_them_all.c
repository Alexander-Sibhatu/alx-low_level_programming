#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of arguments the function takes
 *
 * Return: 0 - Success.
 */

int sum_them_all(const usigned int n, ...)
{
	va_list args;

	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		int sum += va_arg(args, unsigned int);
	}
	va_end(args);
}
