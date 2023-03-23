#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The numbers
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -n;
		last = n % 10;
		_putchar(last + '0');
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
	}
	if (last < 0)
	{
		last = -last;
		_putchar(last + '0');
	}
	return (last);
}
