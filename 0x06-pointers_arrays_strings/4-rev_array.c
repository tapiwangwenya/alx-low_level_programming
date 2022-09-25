#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n: nuber of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int count, tmp;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		tmp = a[count];
		a[count++] = a[n];
		a[n--] = tmp;
	}
}
