#include "holberton.h"

/**
 * rev_string
 * @
 * Return: 0 (Sucess)
 */
void rev_string(char *s)
{
	int n, i, j = 0;
	char temporal[100];

	for (n = 0; s[n] != '\0'; n++)
	{
		temporal[n] = s[n];
	}
	for (i = (n - 1); i >= 0; i--)
	{
		s[j] = temporal[i];
		j++;
		
	}
	
}
