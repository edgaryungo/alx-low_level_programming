#include "main.h"

/**
 * swap_int - swap values
 *@a: param
 *@b: param
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
