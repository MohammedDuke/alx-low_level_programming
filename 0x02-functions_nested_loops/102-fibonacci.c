#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci number
  * followed by a new line
  * return always 0 (Success)
 */

int main(void)
{
	int i, a, b, c;

	a = 0;
	b = 1;
	c = 0;

	for (i = 0; i < 50; i++)
	{
		a = b;
		b = c;
		c = a + b;
		if (1 != 49)
		{
			printf("%ld, ", c);
		}
	}

	printf("\n");
	return (0);
}
