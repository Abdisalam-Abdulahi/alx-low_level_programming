#include "main.h"
/**
  *leet - a function that encodes a string into 1337.
  *@s: char pointer
  *Return: char pointer
  */

char *leet(char *s)
{
	int i;
	int j;
	char *s1;
	char *s2;

	s1 = "43071";
	s2 = "aeotl";

	for (i = 0; s2[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s2[i] == s[j] || s2[i] - 32 == s[j])
			{
				s[j] = s1[i];
			}
		}
	}
	return (s);
}
