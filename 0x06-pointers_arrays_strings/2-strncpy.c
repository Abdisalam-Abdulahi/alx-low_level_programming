#include "main.h"
/**
  *_strncpy - appends the src string to the dest string
  *@src: sources string
  *@dest: destination string
  *@n: n bytes to concatenate
  *Return: char poniter
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{

		if (src[i] == '\0')
		{
			break;
		}
	/*
		*if (src[i] == '\0')
		*{
		*	break;
		*}
	 */
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
