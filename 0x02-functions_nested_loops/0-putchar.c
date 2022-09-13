#include "main.h"

/**
 * main -  A program that prints _putchar, followed by a new line
 *
 * Return: always 0 (sucess)
 *
 */

int main(void)
{

	char word[] = "_putchar";

	int i;



	for (i = 0; i < 8; i++)

		_putchar(word[i]);

	_putchar('\n');
Return(0);
}
