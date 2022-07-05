#include<stdio.h>
#ifndef MY_HEADER
#define MY_HEADER
/**
* print_alphabet - Entry point
*
* Description: The header main.h
*
* Return: 0 (Success)
*/
char  print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (char);
}
#endif
