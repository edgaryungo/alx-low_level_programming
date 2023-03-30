#include "main.h"

/**
 * rot13 - encodes using rot 13
 * @str: input
 * Return: char str
 */
char *rot13(char *str)
{
	int counter = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + count) == alphabet[i])
			{
				*(str + count) == rot[i];
				break;
			}
		}
		count++
	}
	return (str);
}
