#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with byte
 * @s: memory area to be filled
 * @b: char
 * @n: number of times to copy b
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
/**
  *_calloc -  function that allocates memory for an array, using malloc
  *@nmemb: is an array in which we will allocate memory for its elements
  *@size: the size of memory to allocate for each elemnt
  *Return: a pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
