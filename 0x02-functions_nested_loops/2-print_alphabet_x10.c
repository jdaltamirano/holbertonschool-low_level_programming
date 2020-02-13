#include "holberton.h"
/**
 * print_alphabet_x10 - If else statement
 *
 * Return: 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char n;

	while (a < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		a++;
	}
}
