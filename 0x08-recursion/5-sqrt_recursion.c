#include "main.h"
/**
 * squart - calculate square root
 * @n: int
 * @x: square
 * Return: integer
 */
int squart(int n, int x)
{
	if (n == x * x)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (squart(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: integer
 * @x: square
 * Return: square root of a number
 */
int squart(int n, int x);
int _sqrt_recursion(int n)
{
	return (squart(n, 1));
}
