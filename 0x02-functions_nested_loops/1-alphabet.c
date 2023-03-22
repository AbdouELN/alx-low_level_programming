#include "main.h"
/**
 * main - Entry point
 *
 * print-alphabet - Print all alphabet
 *
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a';letter <= 'z';letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
