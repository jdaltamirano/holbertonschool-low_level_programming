#include "holberton.h"

/**
 * _print_rev_recursion - If else statement
 * @s:char
 * Return: 0 (Sucess)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
