#include "main.h"
#include<stdio.h>
/**
 * _islower  - check the code.
 *
 * parameter c: is used as an argument
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
}
