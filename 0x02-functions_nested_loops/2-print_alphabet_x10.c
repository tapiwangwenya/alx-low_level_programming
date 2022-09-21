#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10
 * author: tapiwangenya
 * Return: nothing, just void
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	while (a <= 9)
	{
		b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
