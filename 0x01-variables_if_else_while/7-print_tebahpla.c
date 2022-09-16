#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char w;

	for (w = 'z'; w >= 'a'; w--)
		putchar(w);
	putchar('\n');
	return (0);
}
