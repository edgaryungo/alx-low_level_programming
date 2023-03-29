#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string.
 * Return: the pointer to dest.
 */

char *leet(char *str)
{
	int count = 0, i;
	int low_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int replace[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == low_case[i] || *(str + count) == upper_case[i])
			{
				*(str + count) = replace[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
