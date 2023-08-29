#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: The number of bytes in the memory area that should be filled
 * @src: where the memory is copied
 * @dest: where the memory is stored
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
