#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees 2 dimensional grid
 *@grid: valeur
 *@height: array
 *Return: 0 success
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++) /*libere chaque ligne*/
	{
		free(grid[i]);
	}
	free(grid); /*libere le tableau de pointeurs vers lignes*/
}
