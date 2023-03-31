#include "main.h"
/**
 * print_number - that prints an integer.
 *
 * @n: number to be printed
 *
 */
void print_number(int n)
{
	unsigned int num = n;

	while (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if ((num / 10) != 0)
	{
		_putchar((num / 10) + '0');
	}
	_putchar((num % 10) + '0');
}
