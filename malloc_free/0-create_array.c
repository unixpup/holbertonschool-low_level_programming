#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: character to inicialize array
 * Return: NUll if size = 0 or if alloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

