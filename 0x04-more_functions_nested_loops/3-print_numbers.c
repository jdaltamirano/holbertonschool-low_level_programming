#include "holberton.h"
/**
 * print_numbers - If else statement
 * @n:
 * Return: 0 (Succes)
 */

void print_numbers(void)

{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
