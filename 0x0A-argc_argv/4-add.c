#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: arguments counter
 * @argv: arguments value
 * Return: 1 if one of the numbers contain not digits symbols
 * otherwise 0(Success)
 */
int main(int argc, char *argv[])
{
	int res;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < 0 || *c > 9)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}

