#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int longi = 0;
	int j = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	j = longi - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
