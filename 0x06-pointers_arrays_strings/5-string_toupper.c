#include "holberton.h"
/**
 * string_toupper - If else statement
 * @s: char
 * Return: 0 (Succes)
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
