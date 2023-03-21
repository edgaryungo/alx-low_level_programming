#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, z;
	i = 0;

	while(i < 10)
	{
		for (z = 97; z < 122; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
