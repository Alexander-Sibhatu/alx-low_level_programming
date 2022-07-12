#include "main.h"

/**
 * puts2 - prints every other char of a string, starting w- first character
 *
 * @str: parameter passed
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] != '\0')
		{
			if (count % 2 == 0)
			{
				_putchar(str[count]);
			}
			count++;
		}
		else
		{
			count = -1;
			_putchar('\n');
		}
	}
}
