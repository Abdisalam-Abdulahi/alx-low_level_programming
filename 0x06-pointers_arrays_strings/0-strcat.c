#include "main.h"
/**
  *_strcat - appends the src string to the dest string
  *@src: sources string
  *@dest: destination string
  *Return: char poniter
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

