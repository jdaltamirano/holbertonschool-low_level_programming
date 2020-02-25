#include "holberton.h"
/**
 * _strstr - If else statement
 * @haystack: char
 * @needle: char
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] && (haystack[i] == needle[0]); j++)
		{
			if (haystack[i + j] == needle[j])
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
