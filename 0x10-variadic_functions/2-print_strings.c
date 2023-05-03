#include "variadic_functions.h"
/**
 * print_strings - print characters
 * @separator: the string to be printed between the strings
 * @n: nember of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list par;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(par, n);
	while (i--)
	{
		printf("%s%s", (s = va_arg(par, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(par);
}
