#include "main.h"

/**
 * print_most_numbers - print 0 t0 9 exclude 2 and 4
 *@a: parameter
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a == 50 && a == 52)
		{
			break;
		}
		_putchar(a);
	}
	_putchar('\n');
}
