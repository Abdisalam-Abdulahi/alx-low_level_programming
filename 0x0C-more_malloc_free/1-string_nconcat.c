#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  *string_nconcat - function that concatenates two string
  *@s1: the first string
  *@s2: the second string
  *@n: number bytes of s2 to be copid in s
  *Return: apointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, ln2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1])
		len1++;
	ln2 = 0;
	while (ln2 < n)
		ln2++;
	s = malloc(((len1 + ln2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
