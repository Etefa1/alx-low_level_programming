#include <stdio.h>

/**
 *main - program that prints the alphabet in lowercases
 *You can only use the putchar
 *Return: 0
 */
int main(void)
{
	int low = 97;

	int up = 65;

	while (low <= 122)
	{
		putchar(low);
		low += 1;
	}
	while (up <= 90)
	{
		putchar(up);
		up += 1;
	}
	putchar('\n');
	return (0);
}
