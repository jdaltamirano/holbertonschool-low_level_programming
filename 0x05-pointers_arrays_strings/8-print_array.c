#include "holberton.h"
#include <stdio.h>

/**
 * print_array - If else statement
 * @a: int
 * @n: int
 * Return: 0 (Sucess)
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
