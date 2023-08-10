#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: int
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
