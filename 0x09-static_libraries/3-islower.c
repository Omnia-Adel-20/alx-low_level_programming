#include "main.h"

/**
 * _islower - show 1 if input is a
 * lowercase character
 *
 * @c: the character in ASCII table
 *
 * Return: 1 for lower case character 0 for the rest
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
