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
	int m, n;

	for (m = 0; m < 100; m++)
	{
		for (n = m + 1; n < 100; n++)
		{
			putchar(m / 10 + '0'); /*prints m first digit*/
			putchar(m % 10 + '0'); /*prints m second digit*/
			putchar(' ');
			putchar(n / 10 + '0'); /*prints n first digit*/
			putchar(n % 10 + '0'); /*prints n second digit*/
			if (m == 98 && n == 99)
			{
				break; /*break outta loop*/
			}
			putchar(','); /*prints comma*/
			putchar(' '); /*prints a space*/
		} /*exit for first loop*/
	} /*exit for second loop*/
	putchar('\n'); /*prints new line*/
	return (0);
}
