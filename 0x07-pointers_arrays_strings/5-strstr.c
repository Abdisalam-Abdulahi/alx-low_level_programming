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
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

/**
  *compare - compares the first of x to entirity of y
  *@x: char ponter
  *@y: char pointer
  *Return: returns pointer
  */

int compare(const char *x, const char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
		{
			return (0);
		}
		x++;
		y++;

	}
	return (*y == '\0');
}
