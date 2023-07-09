/*
 * File: 6-is_prime_number.c
 * Author: Michael Aroworade <Ayoaro85@gmail.com>
 */
#include "main.h"
/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int num)
{
	int div = 2;

	if (num <= 1)
		return (0);

	if (num >= 2 && num <= 3)
		return (1);

	return (is_divisible(num, div));
}
