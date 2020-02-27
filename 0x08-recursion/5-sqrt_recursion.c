#include "holberton.h"
/**
 * _sqrt_recursion - If else statement
 * @n: Int
 * Return: 0 (Sucess)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_rec(1, n));
}
/**
 * sqrt_rec - If else statement
 * @x: Int
 * @y: int
 * Return: 0 (Sucess)
 */
int sqrt_rec(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (sqrt_rec(x + 1, y));
	}
}
