#include <stdio.h>
/**
 * main - entry
 * Return: Always 0(success)
 */
int main(void)
{
	char alpt[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (i; i < 52; i++)
	{
		putchar(alpt[i]);
	}
	putchar('\n');
	return (0);
}
