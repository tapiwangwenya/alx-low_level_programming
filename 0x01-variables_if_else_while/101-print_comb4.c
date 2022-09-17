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
	int r, i, j;

	for (r = '0'; r <= '9'; r++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (j > i && i > r)
				{
					putchar(r);
					putchar(i);
					putchar(j);
					if (r != '7' || i != '8' || j != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

