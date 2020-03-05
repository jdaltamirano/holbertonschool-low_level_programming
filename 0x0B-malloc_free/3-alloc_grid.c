#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - if else statement
 * @width: int
 * @height: int
 * Return: 0 Sucess
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, x;

	if (width < 0 || height < 0)
		return (NULL);

	p = malloc(sizeof(p) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (x = i; x >= 0; x--)
				free(p[x]);
			free(p);
			return (NULL);
		}
	}
	
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
			p[i][x] = 0;
	}
			
	return (p);
}
