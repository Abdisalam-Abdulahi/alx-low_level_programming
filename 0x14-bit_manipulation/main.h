#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdio.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int c_i(char ch);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);


#endif
