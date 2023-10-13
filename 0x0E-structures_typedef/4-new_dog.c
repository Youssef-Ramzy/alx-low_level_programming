#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k, l;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	(*new_dog).name = malloc(i * sizeof(char));
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		(*new_dog).name[j] = name[j];
	(*new_dog).age = age;
	for (k = 0; owner[k]; k++)
		;
	k++;
	(*new_dog).owner = malloc(k * sizeof(char));
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	for (l = 0; l < k; l++)
		(*new_dog).owner[l] = owner[l];
	return (new_dog);
}
