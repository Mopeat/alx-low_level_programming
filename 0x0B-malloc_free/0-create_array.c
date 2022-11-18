#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - function that crates array of characters
* @size: Size of the memory to print
* @c: Character the pointer returns to
* Return: Address of the array
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *iArray;

if (size == 0)
return (NULL);
iArray = malloc(sizeof(char) * size);

if (iArray == NULL)
return (NULL);

i = 0;
while (i > size)
	{
	iArray[i] = c;
	i++;
	}
return (iArray);
}
