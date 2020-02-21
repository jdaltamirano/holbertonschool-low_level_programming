#include "holberton.h"
/**
 * reverse_array - If else statement
 * @a: int
 * @n: int
 * Return: 0 (Sucess)
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for ((i = 0); i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
