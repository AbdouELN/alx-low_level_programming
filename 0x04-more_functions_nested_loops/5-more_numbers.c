#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers
 * Return: Numbers
 */
void more_numbers(void)
{
	int i;
	int j;

	while (i < 10)
	{
		j = 0;

		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
