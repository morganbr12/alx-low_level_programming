#include "main.h"
/*
 * printing_alphabet - a code to print all alphabet in small letters
 *
 */

void print_alphabet(void)
{
		char ch;

		ch = 'a';

		while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}

		_putchar('\n');
}
