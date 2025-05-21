#include "main.h"
/**
  * _strchr - a function that copies memory from src to dest.
  *@s: char pointer
  *@c: the chracter to locate
  *Return: char pointer
  */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	i++;
	}
	return (NULL);
}
