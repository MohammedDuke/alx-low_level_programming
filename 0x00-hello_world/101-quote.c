#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1( Not Success)
 */
int main(void)
{
char fizo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, fizo, 59);

	return (1);
}
