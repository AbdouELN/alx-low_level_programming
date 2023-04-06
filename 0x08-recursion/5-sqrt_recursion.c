#include "main.h"
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: number
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
	return (find_sqrt(n, n / 2));
}
/**
 * find_sqrt - found sqrt of n
 * @n: number
 * @i: potontial sqrt root
 * return: the natural sqrt root 
 */
int find_sqrt(int n, int i)
{
	if (i <= 0)
	{
		return(0);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_sqrt(n, i + 1));
}
