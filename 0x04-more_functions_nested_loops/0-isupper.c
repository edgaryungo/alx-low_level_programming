#include "main.h"

/**
 * _isupper - checks for upper case
 *@c: input
 * Return: 1 foe success or else 0
 */
int _isupper(int c)
{
	if  (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
