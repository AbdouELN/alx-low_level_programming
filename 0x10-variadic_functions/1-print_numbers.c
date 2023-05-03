#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: separator string's
 *
 * @n: number of iintegers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list par;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(par, n);
	while (i--)
	{
		printf("%d%s", va_arg(par, int),
			i ? (separator  ? separator : "") : "\n");
	}
	va_end(par);
}
