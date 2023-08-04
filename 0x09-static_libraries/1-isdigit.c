#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: if c is a digit
 *
 * Return: 1 is c and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
