#include "main.h"

/**
  * _strlen_recursion - returns the length of s
  *@s: is the string in which its length will be returned
  *Return: returns the length of s
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		++i;
	}
	return (i);
}
