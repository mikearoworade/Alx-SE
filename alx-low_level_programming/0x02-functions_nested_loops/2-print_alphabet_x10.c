/*
 * File: 2-print_alphabet_x10.c
 * Author: Michael Aroworade <Ayaro85@gmail.com>
 */
#include "main.h"
/**
 * print_alphabet - print lowercase followed by newline 10times
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
	}
}
