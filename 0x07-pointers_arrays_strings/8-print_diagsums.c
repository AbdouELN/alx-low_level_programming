#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: inputs 2d array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - 1 - i];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
