#include "main.h"
#include <stdlib>

/**
 * grid - écrire une fonction,
 * qui renvoie un pointeur vers un tableau d'entiers à deux dimensions.
 * @width: nombre de colonnes du tableau.
 * @height: nombre de lignes de ton tableau
 *
 * Return: pointeurdu du tableau 2D ou NULL en cas déchec.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *buffer1;
	int *buffer2;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	buffer1 = (malloc(int) * width);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		buffer2[i]= (malloc(int) * height);
		if (buffer2[i] == NULL)
			return (NULL);
		{
			for (j = 0; j < i; j++)
				free(buffer2[i]);
			free(buffer1);
			return (NULL);
		}

		for (j = 0; i < height; j++)
			grid[i][j] = 0;
	}

	return (buffer1);
}
