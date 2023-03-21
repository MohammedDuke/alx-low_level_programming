#include "main.h"

/**
* main - Entry point
* Description - Print _putcher with new line at end
* Return: Always 0( Success)
*/

int main(void)
{
	char st[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(st[i]);

	_putchar('\n');
	return (0);
}

