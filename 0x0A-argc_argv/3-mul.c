#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: number of command line
 * @argv: pointer to array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
