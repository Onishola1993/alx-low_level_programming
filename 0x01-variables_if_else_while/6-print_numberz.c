#include <stdio.h>

/**
 * main - Entry
 *
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}