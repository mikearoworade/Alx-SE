/*
 * File: 9-print_comb.c
 * Author: Michael Aroworade <Ayoaro85@gmail.com>
 */
#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
