#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: the parameter to be checked
 * author: tuneday
 * Return: 1 if entry is a number, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
