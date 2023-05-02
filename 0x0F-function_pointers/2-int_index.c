#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array of integers
 * @size: array size's
 * @cmp: function to pointers
 * Return: returns the index of the first element for which the cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
