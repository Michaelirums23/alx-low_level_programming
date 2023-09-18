#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
        printf("Error\n");
        return 1;
	}
	int bytes = atoi(argv[1]);
	if (bytes < 0)
	{
        printf("Error\n");
        return 2;
	}
	unsigned char *main_ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < bytes; i++)
	{
        printf("%02x", main_ptr[i]);
	if (i == bytes - 1)
            printf("\n");
        else
            printf(" ");
	}
	return 0;
}
