#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: Destination string
 * @src: Source string
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	/* store length of dest in the i variable*/
	while (dest[i] != '\0')
	{
		i++;
	}
	/* concatenate src to dest*/
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	/* terminating the dest string*/
	dest[i] = '\0';

	return (dest);
}
