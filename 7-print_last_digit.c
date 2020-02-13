#include "holberton.h"
/**
 * print_last_digit - If else statement
 * @n: integer number
 * Return: 0 (Succes)
 */

int print_last_digit(int n)
{
	int c;

	if (n < 0)
	{
		c = (n % 10) * -1;
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c = n % 10;
		_putchar(c + '0');
		return (c);
	}
}
