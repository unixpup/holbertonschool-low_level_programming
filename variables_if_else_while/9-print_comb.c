#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: print combinations of single digit numbers
 *
 * Return: Always 0 (Success) and combinations
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9) {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
