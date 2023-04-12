#include"main.h"
#include<stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width parameters
 * @height: height integer
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	array = malloc(sizeof(*array) * height);

	if (height == 0 || width == 0 || array == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(**array) * width);
			if (array[i] == 0)
			{
				while (i--)
				{
					free(array[i]);
					free(array);
					return (NULL);
				}
			}
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
	}
	return (array);
}
