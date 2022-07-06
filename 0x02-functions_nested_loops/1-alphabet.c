#include "main.h"
#include<stdio.h>

/**
* main - Entry point
*
* Description: function that prints the alphabet, in lowercase.
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
	return (0);
}
