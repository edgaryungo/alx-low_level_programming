#include <stdio.h>
#include <sys/syscall.h>
/**
 * main - entry
 * Return: Always 1(success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, str);
	return (1);
}
