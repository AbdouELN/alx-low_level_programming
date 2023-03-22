#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: The sign to print
 *
 * Return: Return 1 if n positive, Return 0 if n negative, otherwise -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
