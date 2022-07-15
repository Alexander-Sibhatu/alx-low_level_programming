#include "main.h"
#include<stdio.h>

/**
 * main - check the code for
 *
 * Return: always 0.
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = lett(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
