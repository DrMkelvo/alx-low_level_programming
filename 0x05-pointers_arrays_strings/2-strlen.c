#include "main.h"
#include <stdio.h>
/**
 * main -check function on the header file
 * int_strlen - function that returns the length of a string.
 * @s: pointer
 */
int _strlen(char *s)
{
int x = 0;
while (s[x])
x++;
return (x);
}
