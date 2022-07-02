#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints lowercase alpha with exception letters
 *
 * Return: (0) Success
 */

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch == 'q' || ch == 'e')
	{
	}
	else
	{
	printf("%c", ch);
	}
}
printf("\n");
return (0);
}
