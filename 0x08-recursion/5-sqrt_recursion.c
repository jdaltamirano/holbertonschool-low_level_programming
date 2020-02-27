#include "holberton.h"
/**
 * _sqrt - if else statement
 * @x: int
 * @y: int
 * Return: 0
 */
int _sqrt(int x, int y)
{
	int r = y * y;

	if (r > x)
		return (-1);
	else if (r == x)
		return (y);
	else
		return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - if else statement
 * @n: int
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
