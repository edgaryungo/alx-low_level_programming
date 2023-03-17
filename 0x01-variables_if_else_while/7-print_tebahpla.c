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
	int i;

	for (i = 25; i > -1; i--)
	{
		putchar(alpt[i]);
	}
	putchar('\n');
	return (0);
}
