#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = 0;
	b = 9;

	while (b < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar(48 + b);
				putchar(48 + a);
				if (a == 9 && e == 8)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++
	}
	putchar('\n');
	return (0);
}
