#include"main.h"
/**
 * factorial - return the factorial of given number
 * @n: number
 * Return: If n is lower than 0, the function should return -1 to
 * indicate an error Factorial of 0 is 1 otherwise return factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
