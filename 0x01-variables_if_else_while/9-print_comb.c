#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		for (j = 0; j <= 8; i++)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
