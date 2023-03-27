#include "main.h"

/**
  * swap_int - switch values of a and b
  *
  * @a: int parameter
  * @b: int parameter
  *
  * return nothing
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
