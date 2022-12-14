#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: if s1 is greater than s2 return number greter than 0
 * but if s1 is less than s2 return number less than 0
 * but if strings are equal return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];

	return (j);
}
