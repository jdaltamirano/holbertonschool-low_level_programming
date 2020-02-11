#include "holberton.h"
/**
 * print_alphabet - If else statement
 *
 * Return: 0 (Succes)
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
