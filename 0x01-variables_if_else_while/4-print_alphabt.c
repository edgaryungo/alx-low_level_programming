#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i; i < 26; i++)
	{
		if (i != 4 && i != 17)
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
