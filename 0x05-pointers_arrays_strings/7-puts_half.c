#include "main.h"

/**
 * puts_half - prints half of str
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int i, s;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		i++;
	}
	
	if (i % 2 == 1)
		s = i / 2;
	else
		s = (i - 1)/ 2;
	for (s++; s < i; s++ )
		_putchar(str[i]);
	_putchar('\n');
}

