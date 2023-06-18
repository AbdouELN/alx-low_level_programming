#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _multiply - multiplies two positive numbers
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
    int i, j, carry, n1, n2, product;
    int *result = malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
        result[i] = 0;

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

    i = 0;
    while (i < size && result[i] == 0)
        i++;

    if (i == size)
        _putchar('0');
    else
    {
        while (i < size)
        {
            _putchar(result[i] + '0');
            i++;
        }
    }

    _putchar('\n');
    free(result);
}
/**
 * _isdigit - checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }

    return 1;
}
/**
 * _strlen - returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;

    return len;
}

