#include "main.h"

/**
 * is_prime_number - input integer prime number
 *
 * @n: the number
 * @i: int
 * Return: 0 or -1
*/

int help(int n, int i);
int is_prime_number(int n)
{
	return (help(n, 2));
}

int help(int n, int i)
{
if (i >= n && n > 1)
	return (1);
else if (n % i == 0 || n <= 1)
	return (0);
else
	return (help(n, i + 1));
}
