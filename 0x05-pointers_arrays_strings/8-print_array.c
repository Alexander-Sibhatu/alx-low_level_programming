#include "main.h"
/**
 * print_array - prints n elements of an array of integers, followed by a new line.
 *
 * @a: firs parameter to be passed
 * @n: second parameter to be passed
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if ( j != (n -1))
		{
			printf(", ");
		}
	}

	printf("\n");
}