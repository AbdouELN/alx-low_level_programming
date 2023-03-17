#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripion: using sizof to print the size of various types
 *
 * Return: Always 0 (Seccess)
*/
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
