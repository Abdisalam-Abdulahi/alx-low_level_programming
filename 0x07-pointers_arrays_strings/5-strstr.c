#include "main.h"
/**
  * _strstr  - finds the first occurrence of the
  *substring needle in the string haystack
  *@haystack: char pointer
  *@needle: char pointer
  *Return: cahr pointer
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
		}
	}
	return (NULL);
}
