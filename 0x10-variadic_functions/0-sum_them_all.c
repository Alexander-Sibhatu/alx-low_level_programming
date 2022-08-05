#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of arguments the function takes.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
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
