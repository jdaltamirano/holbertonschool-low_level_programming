#include "holberton.h"

/**
 * mul  - If else statement
 * @a: integer number
 * @b: integer number
 * Return: 0 (Succes)
 */

int mul(int a, int b)
{
	int result = a + b;

	if (a < 0 || b < 0)
	{
		return (-result);
	}
	else
	{
		return (result);
	}
}
