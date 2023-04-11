#include "main.h"

/**
 * _isupper - checks if an entry is uppercase
 * @c: parameter to be checked
 * author: tuneday
 * Return: 1 if upper, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
