#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string to duplicate
 * Return: a pointer to the duplicated string or null if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == 0)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
