#include <stdio.h>
/**
 * main - entry
 * Return: Always 0(success)
 */
int main(void)
{
	char aplt[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(aplt[i]);
	}
	putchar('\n');
	return (0);
}
