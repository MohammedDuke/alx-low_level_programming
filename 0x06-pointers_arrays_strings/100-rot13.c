#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @cha: the string to encode
 *
 * Return: encode string
 */

char *rot13(char *cha)
{
	int i, j;

	char rot_13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (cha[i] != '\0')
	{
		j = 0;
		while (rot_13[j] != '\0')
		{
		if (cha[i] == rot_13[j])
		{
			cha[i] = ROT_13[j];
			break;
		}
		j++;
		}
		i++;
	}
	return (cha);
}
