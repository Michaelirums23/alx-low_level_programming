#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: 0 or NULL
 */
char *_strdup(char *str)
{
	char *ccc;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ccc = malloc(sizeof(char) * (i + 1));
	if (ccc == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		ccc[r] = str[r];
	return (ccc);
}

