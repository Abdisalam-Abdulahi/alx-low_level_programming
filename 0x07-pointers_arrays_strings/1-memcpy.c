#include "main.h"

/**
  * _memcpy-  a function that copies memory from src to dest.
  *@src: src
  *@dest: destination
  *@n: number of bytes
  *Return: char pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
