#include <stdio.h>
/**
 * main - The first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1;
	unsigned long sum;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (i != 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}

