#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @upp: string input
 * Return: string after changed
 */
char *string_toupper(char *upp)
{
	int i;

	for (i = 0; upp[i] != '\0'; i++)
	{
		if (upp[i] <= 'z' && upp[i] >= 'a')
		{
			upp[i] -= 32;
		}
	}
	return (upp);
}
