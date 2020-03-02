#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - If else statement
 * @argc: int
 * @argv: char
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
