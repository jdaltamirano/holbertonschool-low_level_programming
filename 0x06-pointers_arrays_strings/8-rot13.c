#include "holberton.h"

/**
 * rot13 - If else statement
 * @s: char
 * Return: 0 (Sucess)
 */

char *rot13(char *s)
{
	int i, c;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i])
	{
		c = 0;
		while (c < 52)
		{
			if (s[i] == alph[c])
			{
				s[i] = rot[c];
				break;
			}
			c++;
		}
		i++;
	}
	return (s);
}
