#include "main.h"
/**
 * is_prime_number - return 1 if n prime number
 * @n: int
 * @n2: int
 * Return: 1 or 0
 */
int checkprime(int n, int n2);
int is_prime_number(int n)
{
	return (checkprime(n, 2));
}
/**
 * checkprime - check if n a prime number
 * @n: integre to be checked
 * @n2: integer
 * Return: integer
 */
int checkprime(int n, int n2)
{
	if (n <= n2 && n > 1)
	{
		return (1);
	}
	else if (n % n2 == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (checkprime(n, n2 + 1));
	}
}
