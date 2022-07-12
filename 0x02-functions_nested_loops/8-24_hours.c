#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack B, from 00:00 to 23:5
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
