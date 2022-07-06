#include "main.h"
#include<stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Description: includes the main.h file
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 'a'; j  <= 'z'; ++j)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
