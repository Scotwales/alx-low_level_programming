#include <stdio.h>

/**
 * largest_number - returns the largest number
 * @a: first integar
 * @b: second integar
 * @c: third integar
 * Return: largest number 
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = c;
	}
	return (largest);
}
