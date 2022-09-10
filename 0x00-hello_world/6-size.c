#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("The size of a char: %lu. \n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu. \n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu. \n", (unsigned long)sizeof(li));
	printf("The size of a long long int is: %lu. \n", (unsigned long)sizeof(lli));
	printf("The size of a float is: %lu. \n", (unsigned long)sizeof(f));

	return (0);
}