#include "holberton.h"

/**
 * puts2 - If else statement
 * @str: char
 * Return: 0 (sucess)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
