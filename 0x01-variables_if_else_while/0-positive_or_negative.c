#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* Description: This file contains a code that tells the sign of a number*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
	printf("%d is negative\n", n);
}
else if (n > 0)
{
	printf("%d is positive\n", n);
}
else
{
	printf("%d is zero\n", n);
}
return (0);
}
