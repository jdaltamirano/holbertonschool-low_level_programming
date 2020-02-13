#include "holberton.h"
/**
 * _isdigit - If else statement
 * @c: integer number
 * Return: 0 (Succes)
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
