#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * sum_them_all - prototype
 * File: variadic_functions.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-variadic_functions directory.
 * @n: number of arguments.
 * @...: A variable number of parameters
 * Return: 0 if n == 0.
 *         sum if otherwise.
 */

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
