#include <stdio.hi>

/**
 *main - program that prints the alphabet in lowercases
 *You can only use the putchar
 *Return: 0
 */
int main(void)
{
	int x;

	for (x = 127; x => 97; x--)
	{
		putchar(x);
}
	putchar('\n');
	return (0);
}
