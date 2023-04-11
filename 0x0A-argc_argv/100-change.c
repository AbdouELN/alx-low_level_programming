#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: arg counter
 * @argv: arg value
 * Return: 1 if the number of arguments passed to your program is not exactly 1
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int j, least = 0, mony = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (j = 0; j < 5; j++)
		{
			if (mony >= cents[j])
			{
				least += mony / cents[j];
				mony = mony % cents[j];
				if (mony == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
