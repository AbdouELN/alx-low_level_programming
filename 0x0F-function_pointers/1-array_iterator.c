#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: array of int
 * @size: size of array
 * @action: function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *res = array + size - 1;

	if (array && size && action)
	{
		while (array <= res)
		{
			action(*array++);
		}
	}
}
