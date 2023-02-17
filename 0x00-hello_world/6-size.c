#include <stdio.h>
/**
 * main - A program that prints size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	printf("size of a char: %i bytes(s)\n", sizeof(char));
	printf("size of an int: %i bytes(s)\n", sizeof(int));
	printf("size of an long int: %i bytes(s)\n", sizeof(long int));
	printf("size of an long long int: %i bytes(s)\n", sizeof(long long int));
	printf("size of an float: %i bytes(s)\n", sizeof(float));
	return (0);
}
