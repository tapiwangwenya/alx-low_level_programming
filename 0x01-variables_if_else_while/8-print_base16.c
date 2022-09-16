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
	int b;
	char w;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	for (w = 'a'; w <= 'f'; w++)
		putchar(w);
	putchar('\n');
	return (0);
}
