#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ngrid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ngrid = malloc(sizeof(int) * height);
	if (ngrid == NULL)
	{
		free(ngrid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ngrid[i] = malloc(width * sizeof(int));
		if (ngrid == NULL)
		{
			for (i--; i >= 0; i--)
				free(ngrid[i]);
			free(ngrid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ngrid[i][j] = 0;

	return (ngrid);
}
