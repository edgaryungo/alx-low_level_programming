#include <stdio.h>
#include <string.h>
/**
 * main - Prints numbers between 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpt[26] = "abcdefghijklmnopqrstuvwxyz";
	/*reverse(alpt);*/
	int i = 26;

	for (i; i > 0; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
