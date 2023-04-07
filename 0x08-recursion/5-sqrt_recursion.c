#include "main.h"
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: number
 * find_sqrt - find square of a number
 * Return: The natural sqrt root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1));
}
/**
 * find_sqrt - find square of a number
 * @n: number
 * @i: potontial sqrt root
 * Return: the natural sqrt root of n
 */
int find_sqrt(int n, int i)
{
	if (i <= 0)
	{
		return (0);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_sqrt(n, i + 1));
}
