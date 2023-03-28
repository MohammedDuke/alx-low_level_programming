#include "main.h"

/**
  * _strlen - string length
  *
  * @s: character parameter
  *
  * Return: Length value
  */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		++len;
	}
	return (len);
}
