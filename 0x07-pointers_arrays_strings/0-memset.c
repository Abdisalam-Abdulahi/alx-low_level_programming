#include "main.h"

/**
  * _memset -  a function that fills memory with a constant byte.
  *@s: memory area to be filled
  *@b: contstant bytes
  *@n: number of bytes
  *Return: char pointer
  */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
