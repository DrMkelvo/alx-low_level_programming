#include "main.h"

/**
 **_memcpy - copies memory area
 * @dest: is the storing memory area
 * @src: is the memory where is copied
 * @n: this is the length of src (no of bytes)
 *
 * Return: returns the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
