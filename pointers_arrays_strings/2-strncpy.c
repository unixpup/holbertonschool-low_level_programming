#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: source
 * @n: the number of bytes to be copied from src
 *Description: copies bytes
 *Return: a pointer to destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
