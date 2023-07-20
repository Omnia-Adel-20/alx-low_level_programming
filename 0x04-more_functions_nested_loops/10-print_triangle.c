#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: the size of the triangle
 *
 * Return: void
*/

void print_triangle(int size)
{
	int x, y, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (spaces = size - x; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
