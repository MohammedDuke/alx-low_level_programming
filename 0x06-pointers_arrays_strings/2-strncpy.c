#include "main.h"

/**
  * _strncpy - coppy the string
  *
  * @dest: array that returns
  * @src: the pointer the recive the string
  * @n: times to interate
  *
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
