#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 *
 * @n: Number of times the character  should be printed
 *
 * Return: Line
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}