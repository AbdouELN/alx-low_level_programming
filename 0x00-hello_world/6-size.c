#include <stdio.h>

/**main - Retry point
 *
 *Descripion: using sizof to print the size of various types
 *
 * Return Always 0 (Seccess)
*/
int main(void)
{
	char i;
	int b;
	long c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(s)\n", sizeof(i));
	printf("size of an int: %lu byte(s)\n", sizeof(b));
	printf("size of a long int: %lu byte(s)\n", sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
