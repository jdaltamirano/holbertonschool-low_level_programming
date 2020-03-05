#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - If else statement
 * @s1: char
 * @s2: char
 * Return: 0 Sucess
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, size, i;
	char *s;

	if (s1 == NULL)
		l1 = 0;
	else
	{
		for (l1 = 0 ; s1[l1] ; l1++)
			;
	}
	if (s2 == NULL)
		l2 = 0;
	else
	{
		for (l2 = 0 ;  s2[l2]; l2++)
			;
	}
	size = l1 + l2 + 1;
	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		s[i + l1] = s2[i];
	}
	s[l1 + l2] = '\0';
	return (s);
}
