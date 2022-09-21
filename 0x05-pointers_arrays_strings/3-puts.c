#include "main.h"

/**
 *
 * puts - function that prints a string followed by a new line
 *
 * @str - the function 
 *
 * return: should return a string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[1] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
