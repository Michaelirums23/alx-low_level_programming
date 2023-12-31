#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input value
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if a number is a prime
 * @n: input value
 * @i: iterates the value
 * Return: 0 or 1
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
