#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: value of string
 * Return: s
 */
int _strlen(char *s)
{
	char *str;
	int len;
	
	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
