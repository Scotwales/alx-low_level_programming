#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char uc;

	for (uc = 'z'; uc >= 'a'; uc--)
		putchar(uc);

	putchar("\n");

	return (0);
}
