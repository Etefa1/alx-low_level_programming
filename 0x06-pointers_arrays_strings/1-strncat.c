#include "main.h"
#include <string.h>

/**
 * _strcat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
strcat(dest, src, n);
return (dest);
}
