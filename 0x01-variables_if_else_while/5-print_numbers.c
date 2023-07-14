#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints all single digit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
