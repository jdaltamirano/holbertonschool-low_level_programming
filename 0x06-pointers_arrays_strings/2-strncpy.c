#include "holberton.h"
/**
 * *_strncpy - If else statement
 * @dest: char
 * @src: char
 * @n: int
 * Return: 0 (Sucess)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
