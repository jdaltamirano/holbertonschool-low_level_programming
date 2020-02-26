#include "holberton.h"

/**
 * _strlen_recursion - If else statement
 * @n:
 * @s: char
 * Return: 0 (Sucess)
 */

int _strlen_recursion(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	;

	return (n);
}
