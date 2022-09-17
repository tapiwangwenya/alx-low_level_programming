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
	int r, i;

	for (r = '0'; r <= '9'; r++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (i > r)
			{
				putchar(r);
				putchar(i);
				if (r != '8' || i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
