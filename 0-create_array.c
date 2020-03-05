#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - If else statement
 * @size: int
 * @c: char
 * Return: 0 Sucess
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(c));
	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
