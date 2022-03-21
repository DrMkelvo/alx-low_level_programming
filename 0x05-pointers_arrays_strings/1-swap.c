#include "main.h"
/**
 * main -header file to check our functions
 *swap_int - function to swap
 * @a: first num
 * @b: second num
 * no return 0
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
