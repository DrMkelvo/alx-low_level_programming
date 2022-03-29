#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: this is a string.
 * @accept: bytes that may compose part of the string
 * Return: no of bytes composing the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
