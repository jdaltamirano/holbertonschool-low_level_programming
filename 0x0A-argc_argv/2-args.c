#include <stdio.h>
#include "holberton.h"

/**
 * main - If else statement
 * @argc: int
 * @argv: char
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
