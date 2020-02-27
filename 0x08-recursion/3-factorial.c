#include "holberton.h"

/**
 * factorial - If else statement
 * @n: Int
 * Return: 0 (Sucess)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
