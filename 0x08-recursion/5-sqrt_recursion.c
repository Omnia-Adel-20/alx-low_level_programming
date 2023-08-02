#include "main.h"

/**
 * _sqrt_recursion - function that the natural square root of a number
 *
 * @n: the number
 * Return: n does not have a natural square root -1
*/

int help(int n, int val);
int _sqrt_recursion(int n)
{
	return (help(n, 1));
}

/**
 * help - help function
 * @n: number
 * @val: square
 * Return: val or -1
*/

int help(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (help(n, val + 1));
	else
		return (-1);
}
