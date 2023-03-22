#include "main.h"
/**
 * _print_sign - checked the sign of a number
 * @n: The sign to print
 *
 * Return: Return 1 if n positive, Return 0 if n negative, otherwise -1.
 */
int print_sign(int n)
{
	while (n > 0)
	{
		_putchar('+');
		return (1);
	}
	while (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	while (n = 0)
	{
		return (0);
	}
}
