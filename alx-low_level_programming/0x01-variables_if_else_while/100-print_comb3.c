/*
 * File: 10-print_comb2.c
 * Author: Michael Aroworade <Ayoaro85@gmail.com>
 */
#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == j || i > j)
				continue;
			else
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	return (0);
}
