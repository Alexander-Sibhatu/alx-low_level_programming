#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: This code shows the range of the last digit of a number
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int dig = n % 10;
if (n > 5)
{
	printf("Last digit of %d is %d and is greater thatn 5\n", n, dig);
}
else if (n == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, dig);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
}

	return (0);
}
