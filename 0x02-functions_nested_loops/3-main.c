#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @n: Number to pass to _islower function
 */
void test_islower(int n)
{
	int r;

	r = _islower(n);
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	test_islower('o');
	return (0);
}
