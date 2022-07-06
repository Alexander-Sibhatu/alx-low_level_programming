#include "main.h"
#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	char ch;
	
	printf("Enter any character");
	scanf("%c", &ch);

	if(ch >= 'A' && ch <= 'Z')
	{
		return (0);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
}
	

