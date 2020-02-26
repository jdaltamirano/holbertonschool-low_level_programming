#include "holberton.h"

/**
 * _strlen_recursion - If else statement
 * @s: char
 * Return: 0 (Sucess)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return 1 + _strlen_recursion(s + 1);
	} else 
	{
		return 0;
	}
}
