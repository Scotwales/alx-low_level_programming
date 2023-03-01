#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: value of string
 * Return: length
 */
int _strlen(char *s)
{
	int long1 = 0;

	while (*s != '\0')
	{
		long1++;
		s++;
	}

	return (long1);
}
