#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints the alphabets uper and lowercase
 *
 * Return: (0) Success
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	printf("%c", ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	printf("%c", ch);
}
printf("\n");
return (0);
}
