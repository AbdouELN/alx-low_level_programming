#include "main.h"
/**
 * print_most_numbers - Print numbers (0 through 9) not 2 and 4
 *
 * Return: Numbers
 */
void print_most_numbers(void)
{
	int i;
	for (i = 47; i < 58; i++)
	{
		if (i != 49 && i != 51)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
