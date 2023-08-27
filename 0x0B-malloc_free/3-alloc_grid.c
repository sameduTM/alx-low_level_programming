#include "main.h"

/**
  * alloc_grid - pointer to 2D array
  * @width: width of grid
  * @height: height of grid
  *
  * Return: pointer to 2D array, otherwise NULL
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	
	if (width == 0 || height == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		printf("0 ");
		for (j = 1; j < width; j++)
		{
			printf("0 ");
		}
		printf("\n");
	}
	printf("\n");

	return (0);
}
