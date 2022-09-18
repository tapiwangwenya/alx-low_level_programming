#include "main.h"

/**
 * print_line - prints line following a given number
 * @n: parameter to be passed
 * author: tuneday
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
