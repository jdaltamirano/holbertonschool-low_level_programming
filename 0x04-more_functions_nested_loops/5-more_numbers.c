#include "holberton.h"

 /**
 * more_numbers - If else statement
 * @n:
 * @c:
 * Return: 0 (Succes)
 */

void more_numbers(void)

{
	int c, n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
