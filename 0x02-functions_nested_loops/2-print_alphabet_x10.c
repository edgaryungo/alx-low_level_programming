#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, z;

	for (i = 0; i < 10; i++)
	{
		for (z = 97; z < 123; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
