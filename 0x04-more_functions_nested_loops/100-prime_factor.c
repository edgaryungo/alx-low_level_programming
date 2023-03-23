#include <stdlib.h>
#include <stdio.h>

/**
 * main - find prime factorization
 *
 *
 * Return: 0 on success
 */
int main(void)
{
	int num, prm;

	num = 612852475143;

	for (prm = 2; prm < num; prm++)
	{
		while (num % prm == 0)
		{
			/*printf(" %d", prm);*/
			num = num / prm;
		}
	}
	printf("largest prime factor, %d", prm);
	return (0);
}

