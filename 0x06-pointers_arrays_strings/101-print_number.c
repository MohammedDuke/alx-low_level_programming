#include "main.h"
/**
 * print_number - encodes a string using rot13
 * @n: the input
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if ( i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
