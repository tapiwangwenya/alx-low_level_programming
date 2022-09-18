#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * author: tuneday
 * Return: nothing
 */
void more_numbers(void)
{
	int i, b;

	for (i = 0; i <= 9; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
