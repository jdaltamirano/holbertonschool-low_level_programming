#include "holberton.h"
/**
 * _islower - If else statement
 * @c: integer number
 * Return: 0 (Succes)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
