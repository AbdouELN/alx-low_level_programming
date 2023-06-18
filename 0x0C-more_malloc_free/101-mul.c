#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _multiply - Multiplies two positive numbers
 * @num1: The first number to multiply
 * @num2: The second number to multiply
 *
 * Description: This function multiplies two positive numbers
 * and prints the result.
 */
void _multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int size = len1 + len2;
	int *result = malloc(size * sizeof(int));

	if (result == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	_set_to_zero(result, size);
	perform_multiplication(result, num1, num2, len1, len2, size);
	print_result(result, size);

	free(result);
}

/**
 * _set_to_zero - Sets an array to zero
 * @arr: The array to set
 * @size: The size of the array
 */
void _set_to_zero(int *arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		arr[i] = 0;
}

/**
 * perform_multiplication - Performs the multiplication of two numbers
 * @result: The array to store the result
 * @num1: The first number
 * @num2: The second number
 * @len1: The length of the first number
 * @len2: The length of the second number
 * @size: The size of the result array
 */
void perform_multiplication(int *result, char *num1, char *num2, int len1,
		int len2, int size)
{
	int i, j, carry, n1, n2, product;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';

			product = (n1 * n2) + result[i + j + 1] + carry;
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}

		if (carry)
			result[i + j + 1] = carry;
	}
}

/**
 * print_result - Prints the result array
 * @result: The result array
 * @size: The size of the result array
 */
void print_result(int *result, int size)
{
	int i = 0;
