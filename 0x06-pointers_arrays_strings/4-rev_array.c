#include "main.h"

/**
 * reverse_array - function that reverses the content
 * @a: array
 * @n: numbers of elements
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
