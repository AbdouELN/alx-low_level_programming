#include <stdio.h>
/**
 * main - print name of program
 * @argc: integer
 * @argv: list
 * Return: always 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}