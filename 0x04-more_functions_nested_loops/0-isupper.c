#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: is passed parameter, to be checked.
 * Return: 0 Success.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
