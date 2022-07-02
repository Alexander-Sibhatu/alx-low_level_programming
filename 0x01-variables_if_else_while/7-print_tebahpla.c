#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that prints the lowercase alphabet in reverse
 *
 * Return: (0) Success
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

