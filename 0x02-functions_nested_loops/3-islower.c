#include "main.h"

/**
 * _islower - checks if an entry is lowercase, if YES returns 1
 * otherwise returns 0
 * @c: is the parameter to be compared with ASCII value
 * author: tapiwangwenya
 * Return: if lowercase 1, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
