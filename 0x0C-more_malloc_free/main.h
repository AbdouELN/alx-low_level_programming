#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *str, char by, unsigned int n);
int _isdigit(char *str);
int _strlen(char *s);
void _multiply(char *num1, char *num2);
void print_result(int *result, int size);
void perform_multiplication(int *result, char *num1, char *num2,
		int len1, int len2, int size);
void _set_to_zero(int *arr, int size);
#endif
