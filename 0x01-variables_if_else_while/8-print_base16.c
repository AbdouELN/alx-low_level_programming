#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	int h;
	int e;

	for (h = 0; h <= 9; h++)
	{
		putchar(h + '0');
	}
	for (e = 0; e < 6; e++)
	{
		putchar(e + 'a');
	}
	putchar('\n');
	return (0);
}
