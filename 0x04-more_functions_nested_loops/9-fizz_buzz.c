#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers from 1 to 100 by new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz ");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz ");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", n);
	}
	pritnf("\n");

	return (0);
}
