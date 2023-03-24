#include "main.h"
/**
 * print_line - Print line
 * @n: The number of times the character _ should be printed
 * Return: Line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n || i > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
