#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;
int ld;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	printf("Last digit of%d and is%d greater than 5\n", n, ld);
	else if (ld < 6 && ld != 0)
	printf("Last digit of%d and is%d less than 6 and not 0\n", n, ld);
	else
	printf("Last digit of%d and is%d 0\n", n, ld);
	return (0);
}
