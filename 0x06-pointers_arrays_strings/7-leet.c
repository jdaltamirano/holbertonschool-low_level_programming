#include "holberton.h"

/**
 * leet - If else statement
 * @s: char
 * Return: 0 (Sucess)
 **/
char *leet(char *s)
{
	int i, c, z;
	char alph[] = "oOlLeEaAtT";
	char rep[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		c = 0;
		z = 0;
		while (alph[c] != '\0')
		{
			if (s[i] == alph[c])
			{
				z = c;
				s[i] = rep[z];
			}
			c++;
		}
		i++;
	}
	return (s);
}
