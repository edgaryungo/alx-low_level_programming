#include "main.h"

/**
 * string_toupper - str to upper
 * @*: input
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	int count;

	while (*(str + count) != '\0')
	{
		if (*(str + count) >= 97 && *(str + count) <= 122)
			*(str + count) = *(str + count) - 32;
		count++;
	}
	return (str);
}
