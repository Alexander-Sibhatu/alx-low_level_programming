#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all the possible different combinations of two digits.
 *
 * Return: (0) Success
 */
int main(void)
int i = 48;
int e = 48;

while (e < 58)
{
	int i = 48;
	while (i < 58)
	{
		if (e != i && e < i)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	e++;
}
putchar('\n');
return (0);
}
