#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: this is a string
 * @c: this is a character
 * Return: null terminator && s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}

