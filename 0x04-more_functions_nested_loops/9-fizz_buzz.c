#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers from 1 to 100
 *
 * Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (i < 100)
			pintf(" ");
	}
	pritnf("\n");
	return (0);
}
