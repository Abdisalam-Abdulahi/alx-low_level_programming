#include "main.h"

/**
  *_strcpy - copies from stc to dest
  *@dest: where it's copied to
  *@src:where it's copied from
  *Return: char pointer
  */
char *_strcpy(char *dest, char *src)
{
	int j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] =  src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
