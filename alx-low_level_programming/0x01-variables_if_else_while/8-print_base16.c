/*
 * File: 8-print_base16.c
 * Author: Michael Aroworade <Ayoaro85@gmail.com>
 */
#include <stdio.h>
/**
 * main - print Hexadecimal
 * Return: 0(Success)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
