#include "main.h"

/**
 * reverse_array - reversing an array of integers
 *
 * @a: array to be reversed
 *
 * @n: number of element in an array
 */

void reverse_array(int *a, int n)
{
	int c, b, tmp;

	b = n - 1;

	c = 0;
	while (c < n / 2)
	{
		tmp = a[c];
		a[c] = a[b];
		a[b--] = tmp;
		c++;
	}
}
