#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: (0) Success
 */
int main(void)

int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	printf("%c", ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	printf("%c", ch);
}
return (0);
}