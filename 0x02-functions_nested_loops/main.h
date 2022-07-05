#ifndef MY_HEADER
#define MY_HEADER
/**
* print_alphabet - Entry point
*
* Description: The header main.h
*
* Return: 0 (Success)
*/
void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		print("%d", i);
	}
	printf("\n");
	return (0);
}
#endif
