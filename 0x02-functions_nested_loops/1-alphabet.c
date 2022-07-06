#include "main.h"
#include<stdio.h>

/**
* print_alphabet - Entry point
*
* Description: function that calls main.h and prints the alphabet.
*
* Return: 0 (Success)
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c", i);
	}
	printf("\n");
}
