#include <stdio.h>

/**
 * main - Entry point
 * Description: print the numbers from 1 - 100
 * prints Fizz for multiples of three and Buzz for multiples of five
 * prints FizzBuzz for multiples of three and five
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 3) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
