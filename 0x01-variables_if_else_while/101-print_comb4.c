#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	int i;
	int j;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (l = 0; l <= 9; l++)
			{
				if (l > j && j > i)
				{
					putchar('i');
					putchar('j');
					putchar('l');
				}
				if (i != 7 || j != 8 || l != 9)
				{
					putchar(' ');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
