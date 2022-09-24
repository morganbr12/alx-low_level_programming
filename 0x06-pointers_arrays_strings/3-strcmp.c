#include "main.h"

/**
 * strcmp - to copy two string
 *
 * @s1: first string to compare
 *
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they are equal,
 * more than 0 if s1 is greater than s2;
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			retun (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}