#include "holberton.h"

/**
 * swap_int - If else statement
 * @a: int
 * @b: int
 * Return: 0 (Sucess)
 */

void swap_int(int *a, int *b)
{
	int temporal = *a;

	*a = *b;
	*b = temporal;
}
