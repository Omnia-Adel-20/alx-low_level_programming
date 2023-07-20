#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: if c is uppercase
 *
 * Return: 1 is c and 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
