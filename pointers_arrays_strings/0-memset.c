#include "main.h"

/**
 * _memset - fills the n bytes of memory pointed to s with cinstant type b
 *@s: pointer to memory filled
 *@b: constant byte
 *@n: bytes to fill
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
