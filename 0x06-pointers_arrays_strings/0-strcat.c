#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: This function appends the src string to the dest string
 * @src: This function appends the src string to the dest string
 * Return: pointer dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
		dest[i] = scr[j];

	return (dest);
}
