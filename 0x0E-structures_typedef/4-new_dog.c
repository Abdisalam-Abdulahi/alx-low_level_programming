#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies from src to dest
 * @dest: get string array from src.
 * @src: is starting point.
 * Return: returns apointer.
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}

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
	int len1, len2;

	len1 = len2 = 0;
	while (name[len1] != '\0')
		len1++;
	
	while (owner[len2] != '\0')
		len2++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	
	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
