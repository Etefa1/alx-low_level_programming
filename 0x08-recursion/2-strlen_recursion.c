#include "main.h"

/**
 *  _strlen+recursion - length of a string.
 *  @s: string
 *  Return: the length of a string.
 */
int _strlen_recurtion(char *s)
{
	if (*s == '\n')
		return(0);
	else
		return (1 + _strlen_recurtion(s + 1));
}
