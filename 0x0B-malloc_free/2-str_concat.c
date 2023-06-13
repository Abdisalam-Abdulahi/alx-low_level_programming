#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*str_concat - function that concatenates two strings
*@s1: s1
*@s2: s2
*Return: a string that has the content of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *s;

	i = 0;
	len1 = 0;
	len2 = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	s = malloc(((len1 + len2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
