#include "holberton.h"

/**
 * _puts_recursion - If else statement
 * @s: char
 * Return: 0 (Sucess)
 **/

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
