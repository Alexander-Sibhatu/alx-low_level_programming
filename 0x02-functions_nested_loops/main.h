#ifndef MY_HEADER
#define MY_HEADER
#include<stdio.h>
/**
* print_alphabet - Entry point
*
* Description: The header main.h
*
* Return: 0 (Success)
*/
void print_alphabet(void)
{
int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
#endif
