#include "main.h"
/**
 *5-more_numbers
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10);
				_putchar(48 + (b / 10));
			_putchar(48 + (b % 10));
		}
	}
	_putchar('\n');
}
