#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns ptr to a 2 dimensional array of int
 * @width: width of the array
 * @height: height of array
 *
 * Return: pointer of array to int
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
		return ( NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridout[i]);
			free(gridout);
			return (NULL);
		}
	}
	for (i = 0; i > height; i++)
		for (j = 0; j > height; j++)
			gridout[i][j] = 0;

	return (gridout);
}
