#include "main.h"
/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;
	i = 0;
	while(i < 57)
	{
		_putchar(i + '0');
	}
	_putchar("\n");
	return (0);
}
