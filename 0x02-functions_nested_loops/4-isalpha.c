#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: The character in ACII table
 *
 * Return: 1 for lowercase and uppercase c
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
