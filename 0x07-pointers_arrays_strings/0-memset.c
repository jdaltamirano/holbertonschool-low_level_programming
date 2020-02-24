#include "holberton.h"
/**
 * _memset - If else statement
 * @s: char
 * @b: char
 * @n: int
 * Return: 0 (Sucess)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
