#include "main.h"
/**
 * is_prime_number - checks the input integer is a prime number
 * @n: the input integer
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_recursive(n, 2));
}
/**
 * prime_recursive - checks the input integer if is a prime number
 * @n: input number
 * @div: a potential divisor
 * Return: 1 if n is prime 0 if not
 */
int prime_recursive(int n, int div)
{
	if (n == div)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (prime_recursive(n, div + 1));
}
