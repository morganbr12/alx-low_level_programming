/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sa;

	for (sa = 'a'; sa <= 'z'; sa++)
		putchar(sa);
	for (sa = 'A'; sa <= 'Z'; ++sa)
		putchar(sa);
	putchar('\n');

	return (0);
}
