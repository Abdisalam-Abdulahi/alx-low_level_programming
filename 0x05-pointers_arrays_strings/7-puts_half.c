#include "main.h"
/**
  *puts_half - prints half of a string, followed by a new line.
  *@str: char pointer
  */
void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	n = (i / 2);
	while (str[n] != '\0')
	{

		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}
