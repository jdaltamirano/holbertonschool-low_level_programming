#include "holberton.h"

/**
 * rev_string - If else statement
 * @s: char
 * Return: 0 (Sucess)
 */
void rev_string(char *s)
{
	int n, i;
	char temporal;

	for (n = 0; *(s + n) != '\0'; n++)
	;
	n--;
	for (i = 0; i < n; i++, n--)
	{
		temporal = *(s + n);
		*(s + n) = *(s + i);
		*(s + i) = temporal;
	}
}
