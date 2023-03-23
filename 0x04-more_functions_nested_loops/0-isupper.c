#include "main.h"

/**
 *_isupper - check if c is upper or lower case
 *@c: input of alphabet
 *@return  1 if upppercase or 0 for lowercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

