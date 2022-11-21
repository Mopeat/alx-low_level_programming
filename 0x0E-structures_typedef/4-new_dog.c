#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *dogg;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->name = malloc(i * sizeof(dogg->name));
	if (dogg->name == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dogg->name[k] = name[k];
	dogg->age = age;
	dogg->owner = malloc(j * sizeof(dogg->owner));
	if (dogg->owner == NULL)
	{
		free(dogg->owner);
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dogg->owner[k] = owner[k];
	return (dogg);
}
