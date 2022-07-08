#include<stdio.h>
#include "main.h"

/**
 * _islower - calls other function
 *
 * @c: is a parameter passed from the function that calls _islower
 *
 * Return (1): 1 if c is lowercase
 *
 * Return (0): and 0 otherwise
 *
 * Return: c
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(49);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (48);
	}
	return (c);
}
