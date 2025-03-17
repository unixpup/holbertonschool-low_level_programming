#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies sting printed by src
 * @dest: destination buffer
 * @src: source string
 * Description: copies all the string pointed to by src.
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
