#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_helper(s, s + _strlen_recursion(s) - 1));
}

/**
 * is_palindrome_helper - Recursive helper function to check palindrome
 * @start: The start pointer of the string
 * @end: The end pointer of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);
	return (is_palindrome_helper(start + 1, end - 1));
}

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
