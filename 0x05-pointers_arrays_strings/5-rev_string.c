#include "main.h"
/**
 *rev_string - reverses string
 * @s: char pointer
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < i / 2)
	{
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
		j++;
	}

}


