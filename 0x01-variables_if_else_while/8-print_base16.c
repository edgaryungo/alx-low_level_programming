#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char bsth[16] = "0123456789abcdef";
	/*slen = strlen(bsth);*/

	for (i = 0; i < 10; i++)
	{
		putchar(bsth[i]);
	}
	for (i = 10; i < 16; i++)
	{
		putchar(bsth[i]);
	}
	putchar('\n');
	return (0);
}
