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
		printf("");
	}
	printf("%c", ch);
}
return (0);
