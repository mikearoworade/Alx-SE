/*
 * File: 6-print_numberz.c
 * Author: Michael Aroworade <Ayoaro85@gmail.com>
 */
#include <stdio.h>
/**
 * main - print numbers zero to nine using loop
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
