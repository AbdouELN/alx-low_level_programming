#include "main.h"
/**
 * print_line - Print line
 * @n: The number of times the character _ should be printed
 * Return: Line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
