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
	argv[argc] = argv[argc];
	printf("%d\n", (argc - 1));
	return (0);
}
