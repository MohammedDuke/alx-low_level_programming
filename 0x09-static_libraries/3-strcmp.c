#include "main.h"

/**
  * _strcmp - string compare
  * @s1: string one
  * @s2: string two
  *
  * Return: 0 is sucess
  */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;
	b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}

	return (b);
}
