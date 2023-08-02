#include "main.h"

/**
 * _pow_recursion - function the value of x raised to the power of y
 *
 * @x: number
 * @y: rasied number
 * Return: y lower than 0 is -1
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
