#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: input array
 *
 * @n: number of elements
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp[n];

	for (i = 0; i < n; i++)
	{
		tmp[i] = a[n - 1 - i];
		a[i] = tmp[i];
	}
}
