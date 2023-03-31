#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_l;
	int i;

	dest_l = 0;

	while (dest[dest_l] != '\0')
		dest_l++;

	for (i = 0; i  < n && src[i] != '\0'; i++)
		dest[dest_l + i] = srt[i];

	dest[dest_l + i]  = '\0';

	return (dest);
}
