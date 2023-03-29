#include "main.h"
/**
 * puts_half - print the second half of the string
 *
 * @str: string input
 */
void puts_half(char *str)
{
	int i;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
