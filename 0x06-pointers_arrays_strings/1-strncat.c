#include "main.h"
/**
  *_strncat - appends the src string to the dest string
  *@src: sources string
  *@dest: destination string
  *@n: n bytes to concatenate
  *Return: char poniter
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);

}
