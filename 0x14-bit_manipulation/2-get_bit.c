#include "main.h"
/**
  *get_bit - returns the value of a bit at a given index
  *@n: the number in which we are seeking its bits
  *@index: is the index, starting from 0 of the bit you want to get
  *Return: the value of bit at index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long temp;

	if (index > 64)
		return (-1);

	temp = n >> index;

	return (temp & 1);
}
