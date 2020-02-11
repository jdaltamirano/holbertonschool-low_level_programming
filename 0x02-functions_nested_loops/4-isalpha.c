#include "holberton.h"
/**
 * int _isalph - If else statement
 *@c: integer number
 * Return: 0 (Succes)
 */

int _isalpha(int c)

{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
