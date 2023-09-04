#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);

	(void)argv; /* Casting to void to suppress unused variable warning */
}
