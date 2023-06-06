#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: number of parameters
 *
 * @...: the integers
 * Return: sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list par;

	if (!n)
	{
		return (0);
	}
	va_start(par, n);
	while (i--)
	{
		sum += va_arg(par, int);
	}
	va_end(par);
	return (sum);
}