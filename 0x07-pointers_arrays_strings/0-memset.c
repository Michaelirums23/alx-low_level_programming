#include "main.h"
/**
 * _memset -  fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of bytes of memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
