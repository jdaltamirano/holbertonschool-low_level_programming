#include "holberton.h"

/**
 * print_rev - If else statement
 * @n:
 * @s:char
 * Return: 0 (Sucess)
 */

void print_rev(char *s)
{
	int n;
	int i;

	for (n = 0; s[n] != '\0'; n++)
	;
	for (i = (n - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
