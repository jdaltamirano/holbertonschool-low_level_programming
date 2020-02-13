#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - If else statement
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 0; a <= 9; a++)
		{
			putchar('0' + n);
			putchar('0' + a);
			if (n != 9 || a != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
