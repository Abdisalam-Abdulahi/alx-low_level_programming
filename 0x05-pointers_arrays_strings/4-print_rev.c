#include "main.h"
#include <stdio.h>
/**
  * print_rev - prints a string, in reverse, followed by a new line
  * @s: char pointer
  */

void print_rev(char *s)
{
	int k;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	printf("length: %d\n", i);
	k = i;
	while (k >= 0)
	{
		_putchar(s[k]);
		k--;
	}
	/*_putchar('\n');*/
}
