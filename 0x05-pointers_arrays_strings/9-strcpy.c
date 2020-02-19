#include "holberton.h"

/**
 * *_strcpy - If else statement
 * @dest: char
 * @src: char
 * Return: 0 (Sucess)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
