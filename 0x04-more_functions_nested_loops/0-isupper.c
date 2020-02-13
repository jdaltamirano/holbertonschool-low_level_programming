#include "holberton.h"
/**
 * _isupper - If else statement
 * @c: c is a int
 * Return: 0 (Succes)
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
