/**
 * _abs - absolute number
 * @n: number checked
 *
 * Return: absolute number
 */
#include <stdio.h>
#include "main.h"
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
