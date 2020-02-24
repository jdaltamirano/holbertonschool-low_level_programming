#include "holberton.h"
/**
 * *_memcpy - If else statement
 * @dest: char
 * @src: char
 * @n: int
 * Return: 0 (Sucess)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
