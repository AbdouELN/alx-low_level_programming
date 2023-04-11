#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: arguments counter
 * @argv: arguments value
 * Return: 0 if the program receive two argments
 * otherwise 1
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
