#include <stdlib.h>
#include "main.h"

/**
  *_strdup - duplicates a string
  *@str: is the string to be duplicated
  *Return: returns a pointer to a newly allocated space in memory
  */
char *_strdup(char *str)
{
	char *s;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
