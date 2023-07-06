#include "main.h"

/**
  *c_i - convert char to integer
  *@ch: char to be converted
  *Return: the integer version of char
  */

unsigned int c_i(char ch)
{
	return (ch - '0');
}
/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: is pointing to a string of 0 and 1 chars
  *Return: the converted number, or 0 if :
  *there is one or more chars in the string b that is not 0 or 1
  *b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, c;

	len = 0;
	while (b[len] != '\0')
		len++;

	if (b == NULL)
		return (0);

	c = c_i(b[0]);
	for (i = 0; i < (len - 1); i++)
	{

		if (c_i(b[i]) == 0 || c_i(b[i]) == 1)
			c = c * 2 + c_i(b[i + 1]);
		else
			return (0);
	}
	return (c);
}
