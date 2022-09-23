#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: copy parameter to
 * @src: copy  parameter from
 * @n: number of characters to be copied
 * author: tapiwangwenya
 * Return: string
 */
char *_strncat(char *dest, char *src, int n);
{
	int length = 0, i;

	while (dest[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
