#include "holberton.h"

/**
 * _print_rev_recursion - If else statement
 * @s:char
 * Return: 0 (Sucess)
 */

void _print_rev_recursion(char *s)
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
