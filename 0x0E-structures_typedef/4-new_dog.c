#include "dog.h"
#include <stdlib.h>

/**
  *new_dog - a function that creates a new dog
  *@name: the name of the dog
  *@age: the age of the dog
  *@owner: the owner of the dog
  *
  *Return: a struct pointer
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
		free(d);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
	free(d);
}
