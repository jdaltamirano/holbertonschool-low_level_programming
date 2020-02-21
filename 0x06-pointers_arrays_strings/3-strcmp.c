#include "holberton.h"
/**
 * _strcmp - If else statement
 * @s1: char
 * @s2: char
 * Return: 0 (Sucess)
 */

int _strcmp(char *s1, char *s2)
{


	if (s1 < s2)
	return (-15);
	else if (s2 < s1)
	return (15);
	else
	return (0);
}
