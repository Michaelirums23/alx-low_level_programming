#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
