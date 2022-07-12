#include "main.h"

/**
 * 1-swap.c - swaps the values of two integers.
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
