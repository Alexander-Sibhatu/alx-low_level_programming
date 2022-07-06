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
	int i = 0;

	while (i < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			printf("\n");
			j++;
		}
		i++;
	}
}
