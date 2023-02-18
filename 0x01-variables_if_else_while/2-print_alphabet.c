#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char LowerCase;

	for (LowerCase = 'a'; LowerCase <= 'z'; LowerCase++)
	{
		putchar(LowerCase);
	}
	putchar('\n');
	return (0);
}
