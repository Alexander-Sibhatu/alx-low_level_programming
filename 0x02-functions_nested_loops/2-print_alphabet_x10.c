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
	char j;

	while (i < 10)
	{
		j = 'a';
		while (j  <= 'z')
		{
			_putchar(j);
			j++;
		}
		printf("\n");
		i++;
		
	}
}
