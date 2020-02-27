#include "holberton.h"
/**
 * palLen - if else statement
 * @str: char
 * @s: int
 * @e: int
 * Return: 0
 */
int palLen(char str[], int s, int e)
{
	if (s == e)
	{
		return (1);
	}
	if (str[s] != str[e])
	{
		return (0);
	}
	if (s < e + 1)
	{
		return (palLen(str, s + 1, e - 1));
	}
	return (1);
}
/**
 * is_palindrome - if else statement
 * @s: char
 * Return: 0
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
	{
		return (0);
	}
	return (palLen(s, 0, n - 1));
}
/**
 * _strlen_recursion - If else statement
 * @s: Char
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(++s) + 1);
	}
	return (0);
}
