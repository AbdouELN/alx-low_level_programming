#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - generates random valid passwords for the program
 *
 * Return: Always 0
 */
int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
