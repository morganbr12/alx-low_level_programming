#include "main.h"

/**
 *
 * strlen - function that  return the lenght of a string
 *
 * @s: string evaluate
 *
 * Return: the lenth of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while( s[i] != '\0')
	{
		i++;
	}

	return (i);
}
