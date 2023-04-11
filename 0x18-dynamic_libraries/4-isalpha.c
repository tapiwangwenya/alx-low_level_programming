#include "main.h"

/**
 * _isalpha - returns 1 if entry is an lphabet, lowercase or uppercase
 * otherwise returns o
 * @c: is the parametter to be compared with ASCII value
 * author: tapiwangwenya
 * Return: if alphabet returns 1 ohterwise returns 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
