#include "holberton.h"

/**
 * _puts - If else statement
 * @str:char
 * Return: 0 (Sucess)
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
