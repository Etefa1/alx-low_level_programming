#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase exept e and q
 * You can only use the putchar
 * Return: 0
 */
int main(void)
{
	int low = 97;

	while (low <= 122)
	{
		if (low == 'e' || low == 'q')
		{
			low += 1;
		}
		else
		{
			putchar(low);
			low <= 1;
		}
	}
	putchar('\n');
	return (0);
}
