#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: this code displays lower case alphabets from a to z
 *
 * Return: 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	printf("%c", ch);
}
printf("\n");
return (0);
}
