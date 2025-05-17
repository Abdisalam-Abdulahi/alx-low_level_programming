#include "main.h"
/**
  *_strcmp - compares s1 and s2
  *@s1: sources string
  *@s2: destination string
  *Return: int
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
