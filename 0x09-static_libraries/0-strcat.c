#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @dest: char parameter for destination.
 * @src: char parameter for source.
 *
 * Return: always 0.
 */
char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2 = 0;

	while (*(dest + s1) != '\0')
	{
		s1++;
	}

	while (s2 >= 0)
	{
		*(dest + s1) = *(src + s2);
		if (*(src + s2) == '\0')
			break;
		s1++;
		s2++;
	}
	return (dest);
}
