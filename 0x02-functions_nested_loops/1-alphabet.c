#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * author: tapiwangwenya
 * Return: nothing, just void
 */
void print_alphabet(void)
{

	char t = 'a';

	while (t <= 'z')
	{
		_putchar(t);
		t++;
	}
	_putchar('\n');
}
