#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument counter
 * @argv: arguments values
 * Return: if 0
 */
int main(int argc, char **argv)
{
	char *point = (char *)main;
	int a;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n"), exit(2);
	}
	while (a--)
	{
		printf("%02hhx%s", *point++, a ? " " : "\n");
	}
	return (0);
}
