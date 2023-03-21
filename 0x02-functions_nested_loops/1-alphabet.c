#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - Print alphabet with new line at end
 * Return: Always 0( Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar("\n");
	return (0);
}
