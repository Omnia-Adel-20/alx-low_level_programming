#include "main.h"

/**
 * times_table -  prints the 9 times table
*/

void times_table(void)
{
	int num, row, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (row = 1; row <= 9; row++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * row;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
