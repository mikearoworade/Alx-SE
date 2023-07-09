/*
 * File: 2-print_alphabet.c
 * Author: Michael Aroworade <Ayoaro85@gmail.com>
 */
#include <stdio.h>
/**
 * main - use putchar to prin alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
