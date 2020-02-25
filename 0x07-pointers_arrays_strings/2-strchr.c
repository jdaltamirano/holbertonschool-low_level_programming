#include "holberton.h"
/**
* _strchr - If else statement
* @s: char
* @c: char
* Return: 0 (Sucess)
**/

char *_strchr(char *s, char c)
{
	int i = 0, a = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i++;
	while (a <= i)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		a++;
	}
	return ('\0');
}
