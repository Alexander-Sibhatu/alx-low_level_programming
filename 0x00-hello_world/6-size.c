#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;
printf("Size of a Char: %zu byte(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(i));
printf("Size of a long int: %zu byte(s)\n", sizeof(l));
printf("Size of a long long int: %zu byte(s)\n", sizeof(ll));
printf("Size of a float: %zu byte(s)\n", sizeof(d));
return (0);
}
