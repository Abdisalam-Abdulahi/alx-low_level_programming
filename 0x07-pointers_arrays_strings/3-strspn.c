#include "main.h"
/**
  * _strspn -  a function that gets the length of a prefix substring.
  *@s: char pointer
  *@accept: char pointer
  *Return: unsigned int
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len;
	int check;

	check = 0;
	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				check = 0;
				break;
			}
			else
			{
				check = 1;
			}
		}
		if (check == 1)
		{
			return (len);
		}
	}
	return (len);
}
