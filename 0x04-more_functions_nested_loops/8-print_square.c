#include "main.h"
/**
 * print_square - print square
 *
 * @size: size of square  
 * Return: Line
 */
void print_square(int size)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
