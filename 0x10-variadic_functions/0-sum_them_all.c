#include "variadic_functions.h"
#include<stdarg.h>
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
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum +=  va_arg(args, unsigned int);
	}
	va_end(args);

	return (sum);
}
