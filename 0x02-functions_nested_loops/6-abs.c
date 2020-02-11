#include "holberton.h"
/**
 * _abs - If else statement
 * @n: integer number
 * Return: 0 (Succes)
 */

int _abs(int n)

{
	if (n < 0)
	{
		n = n * (-1);
		return (1);
	}
	else
	{
		return (n);
	}
}
