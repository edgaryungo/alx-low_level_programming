#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *ns;
	unsigned int i, j, k, temp;

	if (si == NULL)
		si = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ns = (char *)malloc(sizeof(char) * (i + j + 1));

	if (ns == NULL)
	{
		free(ns);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		*(ns + k) = *(s1 + k);

	temp = j;
	for (j = 0; j < temp; j++)
		*(ns + j) = *(s2 + j);

	return (ns);
}