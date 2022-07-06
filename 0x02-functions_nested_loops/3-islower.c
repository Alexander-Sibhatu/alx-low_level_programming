#include "main.h"
#include<stdio.h>
/**
 * _islower  - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
char ch;

if (ch >= 'A' && ch <= 'Z')
	{
		return (0);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
}
