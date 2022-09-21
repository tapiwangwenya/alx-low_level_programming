#include "main.h"

/**
 * print_sign - prints sign of a number based on zero level
 * @n: parameter whose sign is being checked for
 * author: tapiwangwenya
 * Return: returns 1 for n > 0, -1 for n < 0, 0 for n = 0
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		ret = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		ret = -1;
		_putchar('-');
	}
	else
	{
		ret = 0;
		_putchar('0');
	}
	return (ret);
}
