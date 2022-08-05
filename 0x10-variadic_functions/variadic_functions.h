#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * File: variadic_functions.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-variadic_functions directory.
 * @n: number of arguments.
 * @...: A variable number of parameters
 * Return: 0 if n == 0.
 *         sum if otherwise.
 */

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);

#endif
