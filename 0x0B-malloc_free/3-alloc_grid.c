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
	int i, j, **g;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **) malloc(height * sizeof(int *));

	if (g == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		g[i] = (int *)malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width ; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}
