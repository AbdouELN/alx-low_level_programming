#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar(CH);
	putchar('\n');
	return (0);
}
