#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - Print alphabet with new line at end
 * Return: Always 0( Success)
 */

void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
