#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: this is a pointer to the constant
 * @b: this is a constant
 * @n: number of bytes to be used
 * Return: s is returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
