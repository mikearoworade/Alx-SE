/*
 * File: 7-leet.c
 * Author: Michael Aroworade <Ayoaro85@gmail.com>
 */
#include "main.h"
/**
 * leet - encodes a string into leetspeek.
 * @s: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char re[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
			if (s[i] == leet[j])
				s[i] = re[j / 2];
	}
	return (s);
}
