#include "main.h"

/**
 * _sqrt_recursion - function that the natural square root of a number
 * help - help function
 * @n: the number
 * @val: square root
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
 * @val: square root
 * Return: int
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
