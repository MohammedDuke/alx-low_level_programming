#include "main.h"

/**
 * _isalpha - Entry point
 * @c: check input of function
 * Description - Print alphabet with new line at end
 * Return: Always 0( Success)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
