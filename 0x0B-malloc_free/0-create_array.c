#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *nc;
	unsigned int i;

	if (size == 0)
		return (NULL);

	nc = (char *)malloc(size * sizeof(c));

	if (nc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(nc + i) = c;

	return (nc);
}
